#include <stdio.h>
#include "rectangle.h"

int main() {
    float length = 5.0;
    float width = 3.0;
    float area = calculate_area(length, width);
    printf("Area of rectangle: %.2f\n", area);
    return 0;
}
