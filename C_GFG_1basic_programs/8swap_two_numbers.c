#include<stdio.h>
int main(){

    /*  C Program to Swap two Numbers
        Input : x = 10, y = 20;
        Output : x = 20, y = 10

        Input : x = 200, y = 100
        Output : x = 100, y = 200

    */
   int a,b;
   printf("Enter first numbers ");
   scanf("%d",&a);
   printf("Enter second numbers ");
   scanf("%d",&b);
   printf("\nBEFORE a=%d , b=%d  ",a,b);
   int temp = a;
    a = b;
    b = temp;
   printf("\nAFTER a=%d , b=%d  ",a,b);
   return 0;
   /* printf("\nBEFORE a=%d , b=%d  ",*a,*b); meaning 
        Time Complexity: O(1)
        Auxiliary Space: O(1)
    */
}