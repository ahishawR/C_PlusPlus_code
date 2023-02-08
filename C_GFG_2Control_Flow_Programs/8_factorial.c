#include<stdio.h>
int main(){
    /*C Program To Find Factorial Of A Number
    for example factarial of 4=
    4!=4*3*2*1;*/
        int fact,n;
        fact=1;
        printf("Enter a num for factorial ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            fact*=i;
        }printf("%d is the factorial",fact);
        return 0;
    }
