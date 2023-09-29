#include <iostream>

int main() {
    auto sum = 0;
    for (auto i = 0; i < 100; i++) {
        sum += i;
    }

    std::cout << "sum: " << sum << std::endl;

    return 0;
}