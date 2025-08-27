#include <stdio.h>

int main()
{
    int weight, height;
    float bmi;
    printf("Enter weight in kg: ");
    scanf("%d", &weight);
    if (weight <= 0 || weight > 145)
    {
        printf("Invalid Input");
        return 0;
    }
    printf("Enter height in cm: ");
    scanf("%d", &height);
    if (height <= 0 || height > 193)
    {
        printf("Invalid Input");
        return 0;
    }

    bmi = (float)weight / ((height / 100.0f) * (height / 100.0f));
    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 15.0)
    {
        printf("You are under starvation");
    }
    else if (bmi >= 15.1 && bmi < 17.5)
    {
        printf("You are anorexic");
    }
    else if (bmi >= 17.6 && bmi < 18.5)
    {
        printf("You are underweight");
    }
    else if (bmi >= 18.6 && bmi < 24.9)
    {
        printf("You are ideal");
    }
    else if (bmi >= 25.0 && bmi < 29.9)
    {
        printf("You are overweight");
    }
    else if (bmi >= 30.0 && bmi < 39.9)
    {
        printf("You are obese");
    }
    else if (bmi >= 40.0)
    {
        printf("You are morbidity obese");
    }
}