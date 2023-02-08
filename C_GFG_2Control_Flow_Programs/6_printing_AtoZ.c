#include <stdio.h>
int main()
{
    /*Program to Print Alphabets From A to Z Using Loop
    asciicode of A=65;and Z=65+25 90
    acii of a= 97
    asii of z=97+25=122;*/
    int _;
    printf("Printing A to Z \n");
    for (_ = 65; _ <= 122; _++)
    {
        if (_ == 97)
        {
            printf("\nPrinting a to z \n");
        }
        else if (_ == 91 || _ == 92 || _ == 93 || _ == 94 || _ == 95 || _ == 96)
        {
            continue;
        }
        else
        {
            printf("%c ", _);
        }
    }
    return 0;
}