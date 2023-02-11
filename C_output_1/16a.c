#include<stdio.h>
/*In the following C program There is post increment operation: 
So, printf will print 1 + 128 as output. ++ will increment the x value 
.e. x = 129. */
int main ()
{
int x = 128;
printf ("%d", 1 + x ++);
return 0;
}
