#include <stdio.h>
int main()
/*Initially,
i=0, count=0 and a for loop is running from j= -3 to j=3.
If condition inside the for loop will execute when j>=0 and i is non zero,
So for j=-3, -2, -1, it will not go inside the if condition, as j is less than 0.
When j=0, initial value of i is also 0, so if condition will not satisfy,
but i++ will increment the value of i after checking the if condition. so now i =1.
When j=1, the value of i is 1, so it will enter the if condition and the value of count will be 0+1 = 1,
and i++ will increment the value of i after checking the if condition. so now i =2.
When j=2, the value of i is 2, so it will enter the if condition and the value of count will be 1+2 = 3,
and i++ will increment the value of i after checking the if condition. so now i =3.
When j=3, the value of i is 3, so it will enter the if condition and the value of count will be 3+3 =6 ,
and i++ will increment the value of i after checking the if condition. so now i =4. After running the for loop,
the value of count variable is 6 and the value of i is 4. So count= count +i will be 6+4=10. Hence,
The program will compile successfully and output 10 when executed :*/
{
    int i, j, count;
    count = 0;
    i = 0;
    for (j = -3; j <= 3; j++)
    {
        if ((j >= 0) && (i++))
            count = count + j;
    }
    count = count + i;
    printf("%d ", count);
    return 0;
}
