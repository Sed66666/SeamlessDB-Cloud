#include <chrono>
#include <iostream>
#include <thread>
#include <vector>

#if defined(__linux__) || defined(__APPLE__)
#include <pthread.h>
#elif defined(_WIN32)
#include <windows.h>
#endif

// 设置线程名称
void set_thread_name(const std::string &name) {
#if defined(__linux__)
  pthread_setname_np(pthread_self(), name.c_str());
#elif defined(__APPLE__)
  pthread_setname_np(name.c_str());
#elif defined(_WIN32)
  HRESULT hr = SetThreadDescription(
      GetCurrentThread(), std::wstring(name.begin(), name.end()).c_str());
#endif
}

// CPU 密集型任务
void cpu_intensive_task(const std::string &name, int complexity) {
  set_thread_name(name);
  volatile double result = 0;
  while (true) {
    for (int i = 0; i < complexity * 1000000;
         ++i) { // 线程 3 计算量是 线程 1 的 3 倍
      result += i * 0.0001 * i;
    }
  }
}

// 低 CPU 负载任务
void idle_task(const std::string &name) {
  set_thread_name(name);
  while (true) {
    std::this_thread::sleep_for(std::chrono::seconds(1)); // 休眠，减少 CPU 负载
  }
}

int main() {
  std::vector<std::thread> threads;

  threads.emplace_back(cpu_intensive_task, "1", 1); // 线程 1：普通计算
  threads.emplace_back(idle_task, "2");             // 线程 2：空闲
  threads.emplace_back(cpu_intensive_task, "6",
                       3);              // 线程 3：计算复杂度更高，占用更多 CPU
  threads.emplace_back(idle_task, "4"); // 线程 4：空闲

  for (auto &t : threads) {
    t.join(); // 无限循环，程序不会自动退出
  }

  return 0;
}