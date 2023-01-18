
/*  SUM OF (n) NATURALS NUMNERS-->
    Naturals numbers start from 1 onwards
    sum(n)=1+2+3+4+....+n
    = sum(n)=1+2+3+4+5+.......+(n-1)+n
    = sum(n)=sum(n-1)+n ---->RECURSIVE DEFINATION FOR SUM OF (n) NATURALS NUMBERS;
    Another Defination is ------>[n(n+1)/2]
    */

#include<stdio.h>
int sum(int n){
    if(n==0)        //Time Complexity---O(1)
    return 0;       //Space Complexity---O(1)
   // return(sum(n-1)+n);
    return(n*(n+1)/2);
}
int sum2(int n){
    int s=0,i;
    if(n==0)         //Time Complexity---O(n)
    return 0;       //Space Complexity---O(3)
    for(i=1;i<=n;i++){
        s=s+1;
    } return s;
}
void main(){
     int a=sum(3);
     printf(" recursion %d loop %d",a,sum2(3));   
}