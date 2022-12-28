#include <array>
#include <cstdint>
#include <iostream>

int main() {
    // float
    float f4;

    std::cout << sizeof(f4) << std::endl; // 4

    // int
    uint32_t b;
    int8_t d;

    std::cout << sizeof(b) << std::endl; // 4
    std::cout << sizeof(d) << std::endl; // 1

    // array
    int a[10];
    std::array<int, 5> ia{};

    std::cout << sizeof(a) << std::endl; // 4x10
    std::cout << sizeof(ia) << std::endl; // 4x5

    // pointer
    uint64_t ui8;
    std::array<uint8_t, 5> uia5{};
    uint64_t *uint64ptr = &ui8;

    std::cout << (uint64_t) &ui8 << std::endl;
    std::cout << sizeof(uint64ptr) << std::endl;
    std::cout << (uint64_t) uint64ptr << std::endl;

    return 0;
}