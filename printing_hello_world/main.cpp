#include <cstdint>
#include <iostream>

auto main() -> int32_t{
    int x = 10;
    intptr_t ptr = reinterpret_cast<intptr_t>(&x);
    std::cout << "Pointer value: " << ptr << std::endl;
    return 0;
}