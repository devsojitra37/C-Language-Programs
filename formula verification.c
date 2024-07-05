#include <stdio.h>
int main(void)
{
    float a, b, x;

    printf("Enter value of a: ");
    scanf("%f",&a);

    printf("Enter value of b: ");
    scanf("%f",&b);

    x = (a * a) + (b * b) + (2 * a * b);

    printf("Result = %f\n", x);

    printf("End of code\n");
    return 0;
}
