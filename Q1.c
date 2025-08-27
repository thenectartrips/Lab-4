#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter Three Sides of Triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Sides of triangle must be positive numbers or should be greater than 0.\n");
        return 1;

        if (a + b > c && b + c > a && c + a > b)
        {
            printf("Triangle is Valid\n");
            if (a == b && b == c)
                printf("Triangle is Equilateral\n");
            else if (a == b || b == c || c == a)
                printf("Triangle is Isosceles\n");
            else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
                printf("Triangle is Right Angle\n");
            else if (a != b && b != c && c != a)
                printf("Triangle is Scalene\n");
        }
        else
        {
            printf("Triangle is Not Valid\n");
        }

        return 0;
    }
}