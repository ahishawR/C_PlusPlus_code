#include <stdio.h>
int main()
{
/*If a num is divisible by 4 then it is a leaap year,but some are not 
like 2100 ->  2100 divisible by 4 and also by 100 so its not a leap year .
Then 2016 -> 2016 divisible by 4 but not by 100 so its a leap year .
------(num%4==0 && num%100!=0)---------

1600,2000,2400,2800. These are year which can be divisible by both  4 and 100 and they are leap years. 
So another method is there if a num is divisible by (4,100,400) then it's a leap year also.
-----------(num%4==0 && num%100==0 && num%400==0 ))----------- */
	int num ;
	printf("Enter a number to know it's a leap year or not ");
	scanf("%d",&num);
	if(( num%4==0 && num%100!=0 )||(num%4==0 && num%100==0 && num%400==0 ))
		printf("%d a leap year ",num);
	else 
		printf("%d is not a leap year ",num);
	return 0;
	
}
