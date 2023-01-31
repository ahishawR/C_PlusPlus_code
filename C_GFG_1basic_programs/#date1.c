#include <stdio.h>
#include <stdlib.h>
/*
1st question:
Input 29 12 2003
Output It's December and not a leap year

Input 28 12 2004
Output It's July and it's a leap year
*/
int main(int argc, char const *argv[])
{
    char days[5];
    char month[5];
    char year[10];
    printf("Enter your date of birth in the form DD MM YYYY-\n");
    scanf("%s %s %s", days, month, year);

   
    // Now, checking whether dates are valid or not
    if ((atoi(year) < 0 || atoi(year) > 9999) || atoi(month) > 12 || atoi(month) < 1)
    {
        printf("ERROR- invalid date");
        goto end;
    }
    else if (atoi(month) == 2 && atoi(days) >= 28 && atoi(year) % 4 == 0)
    {
        printf("ERROR- invalid date");
        goto end;
    }
    else if (atoi(month) == 2 && atoi(days) >= 29 && atoi(year) % 4 != 0)
    {
        printf("ERROR- invalid date");
        goto end;
    }
    else if ((atoi(month) == 1 || atoi(month) == 3 || atoi(month) == 5 || atoi(month) == 7 || atoi(month) == 8 || atoi(month) == 10 || atoi(month) == 12) && (atoi(days) > 31))
    {
        printf("ERROR- invalid date");
        goto end;
    }
    else if ((atoi(month) == 4 || atoi(month) == 6 || atoi(month) == 9 || atoi(month) == 11) && (atoi(days) > 31))
    {
        printf("ERROR- invalid date");
        goto end;
    }
    else
    {

        //Now checking the month
        switch (atoi(month))
        {
        case 1:
            printf("It's January");
            break;
        case 2:
            printf("It's February");
            break;
        case 3:
            printf("It's March");
            break;
        case 4:
            printf("It's April");
            break;
        case 5:
            printf("It's May");
            break;
        case 6:
            printf("It's June");
            break;
        case 7:
            printf("It's July");
            break;
        case 8:
            printf("It's August");
            break;
        case 9:
            printf("It's September");
            break;
        case 10:
            printf("It's October");
            break;
        case 11:
            printf("It's November");
            break;
        case 12:
            printf("It's December");
            break;
        default:
            break;
        }
        // atoi function is used to convert String into integer in c
        //checking whether the year is leap year or not
        if (atoi(year) % 4 == 0)
        {
            if (atoi(year) % 100 == 0)
            {
                if (atoi(year) % 400 == 0)
                {
                    printf(" and %s is a leap year",year); // 2400, 2000
                }
                else
                {
                    printf(" and %s is not a leap year", year); // 2100, 1900, 2200
                }
            }
            else
            {
                printf(" and %s is a leap year",year); // 2016, 2024
            }
        }
        else
        {
            printf(" and %s is not a leap year", year); // 2017, 2019, 2021
        }
    }
end:
    return 0;
}