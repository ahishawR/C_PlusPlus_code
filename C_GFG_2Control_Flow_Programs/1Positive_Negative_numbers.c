#include<stdio.h>
int main(){
    /*C program to Check Whether a Number is Positive or Negative or Zero
Input: A = 2
Output: 2 is positive

Input: A = -554
Output: -554 is negative

Time Complexity: O(1)
Auxiliary Space: O(1)*/

int a;
printf("Enter a number \n");
scanf("%d",&a);
if(a==0)printf("Zero is not positive or negative");
else if(a>0)printf("%d is a positive number ",a);
else printf("%d is a negative number ",a);
}