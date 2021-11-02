
#include <iostream>
#include <functional>

auto foo(std::function<int()> fptr) {
    auto result = fptr();
    return result;
}

int main() {
    int value = 5;
    std::cout << foo([value] { return value; });
    return 0;
}