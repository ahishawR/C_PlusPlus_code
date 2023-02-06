#include <stdio.h>
int main()
{   
    /*Input=10203040
    Output=1234*/
    int num, reminder, multi, final;
    multi = 1;final=0;

    printf("Input:  ");
    scanf("%d", &num);
    while (num != 0)
    {
        reminder = num % 10;
        if (reminder != 0)
        {
            final = final + reminder * multi;
            multi = multi * 10;
        }
        num = num / 10;
    }
    printf("Output %d", final);
    return 0;
}