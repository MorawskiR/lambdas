#pragma once
#include <chrono>
#include <functional>
#include <string>
#include <thread>

void schedule(std::function<void()> func, std::chrono::seconds duration);
void schedule(std::function<void(int)> func, std::chrono::seconds duration, int value);
void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string str, double value);

template <typename Func, typename... Args>
void schedule(Func func, std::chrono::seconds dur, Args... args) {
    std::this_thread::sleep_for(dur);
    func(args...);
}
