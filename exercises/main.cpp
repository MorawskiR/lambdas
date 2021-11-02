
#include <iostream>
#include <functional>

  constexpr auto add = [](int n, int m) {
    auto L = [=] { return n; };
    auto R = [=] { return m; };
    return [=] { return L() + R(); };
};


int main() {

static_assert(add(3, 4)() == 7);
}