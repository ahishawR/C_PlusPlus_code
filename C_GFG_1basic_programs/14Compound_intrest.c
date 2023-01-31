

/*Formula to calculate compound interest annually is given by: 
Amount= P(1 + R/100)t

Compound Interest = Amount – P
Where, 
P is principal amount 
R is the rate and 
T is the time span

Input: Principal (amount): 1200
                    Time: 2
                    Rate: 5.4
Output: Compound Interest = 133.099243*/


// float p,r,t,amount;
// printf("enter value of rate and time and principle ");
// scanf("%f%f%f",&r,&t,&p);
// amount=p*(1+r/100)*t;
// printf(" amount %f",amount);
// return 0;


// C program to calculate Compound Interest
#include <stdio.h>
#include<math.h>
int main()
{
double principal = 10000;
double rate = 5;
double time = 2;

// Calculating compound Interest
double Amount = principal *
				((pow((1 + rate / 100),
					time)));
double CI = Amount - principal;
printf("Compound Interest is : %lf",CI);
return 0;
}





