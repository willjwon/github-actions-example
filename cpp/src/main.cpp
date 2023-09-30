#include <iostream>
#include "example.h"

int main() {
    const auto triangle_area = area_triangle(3, 4);
    const auto rectangle_area = area_rectangle(3, 4);

    std::cout << "Triangle area: " << triangle_area << std::endl;
    std::cout << "Rectangle area: " << rectangle_area << std::endl;

    return 0;
}
