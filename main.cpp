#include <iostream>

int main() {
    auto f = []() {
        std::cout << "Hello from lambda !" << std::endl;
    };

    f();
    return 0;
}