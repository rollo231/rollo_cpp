#include <iostream>

struct ST {
    long a; // 8bytes
    int b; // 4bytes
    short c; // 2bytes
};

class Cat {
public:
    void printCat(); // ???
private:
    int age; // 4bytes
    float weight; // 4bytes
};

int main() {

    std::cout << sizeof(ST) << std::endl;
    std::cout << sizeof(Cat) << std::endl;

    Cat cat1{};

    Cat *catPtr = &cat1; // 8bytes
    std::cout << sizeof(catPtr) << std::endl;

    return 0;
}