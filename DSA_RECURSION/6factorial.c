/*FACTORIAL OF (n)
    Represent as [n!] 
    n!= 1*2*3*4*5*.....*n
    And [0!=1!=1]
    fact(n)=(n-1)*n ---->RECURSIVE DEFINATION FOR FACTORIAL OF (n) NATURALS NUMBERS;*/
#include<stdio.h>
int fact(int n){
    if(n==0||n==1)     //Time Complexity---O(1)
    return 0;         //Space Complexity---O(1)
    return ((n-1)*n);
}
int fact2(int n){
    int facto=1;
    for(int i=1;i<=n;i++)    //Time Complexity---O(n)
    facto=facto*i;          //Space Complexity---O(3)
    return facto;
}
 main(){
    int a=4;
    printf("recursion %d loop %d",fact(a),fact2(a));
 }
 