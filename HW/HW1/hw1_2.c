#include <stdio.h>
#include <stdlib.h>

int main()
{
    double side=5.0;
    double radio=9.0;
    printf("The area of triangle is: %f\n", (1.73*side*side)/4);
    printf("The area of square is: %f\n", side*side);
    printf("The area of circle is: %f\n", 3.14*radio*radio);
    printf("The volume of cube is: %f\n", side*side*side);
    printf("The volume of cylinder is: %f\n", 3.14*radio*radio*9);

    system("pause");
    return 0;
}