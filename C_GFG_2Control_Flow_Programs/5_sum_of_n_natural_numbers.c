#include<stdio.h>

int sum(int a){
    int summ=0;
    for(int i=0;i<=a;i++){
    summ+=i;//there is difference between =+ and =+;
    }
    printf("\n By function %d",summ);
}
int recurtion(int a){
    if(a==0)        //Time Complexity---O(1)
    return 0;       //Space Complexity---O(1)
   // return(sum(n-1)+n);
    return(a*(a+1)/2);
}

int main(){
    /*C Program to Calculate Sum of Natural Numbers
    Input: n = 10
    Output: 55 
    Here we will build a C program to calculate the sum of natural numbers using 4 different approaches i.e.
Using while loop
Using for loop
Using recursion
Using Functions
*/
        int a,count,i,count2,count3,count4;
        i=0;count=0,count2=0,count3=0,count4=0;
        printf("Enter a num for sum ");
        scanf("%d",&a);

        while(i<=a){
            count=count+i;
            i++;
        }printf(" while loop = %d\n",count);
            //for loop
            for(int b=0;b<=a;b++){
                count2=count2+b;
            }printf("for loop %d",count2);
                //by function
                sum(a);
                //by recurtion;
                printf("\nRecurtion %d",recurtion(a));
        return 0;



}