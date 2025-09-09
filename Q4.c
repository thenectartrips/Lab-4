#include <stdio.h>

int isLeapYear(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

int main()
{
    int year, basic_year = 1;
    int total_days = 0, day;

    printf("Enter the year: ");
    scanf("%d", &year);

    for (int i = basic_year; i < year; i++)
    {
        if (isLeapYear(i))
            total_days += 366;
        else
            total_days += 365;
    }

    day = (1 + total_days) % 7;

    printf("01/01/%d is ", year);
    switch (day)
    {
    case 0:
        printf("Sunday\n");
        break;
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    }

    return 0;
}
