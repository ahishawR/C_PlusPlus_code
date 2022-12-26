#include<stdio.h>

void main(){
    //Question: How to Read and Print an Integer value in C

//      in C--> 
//scanf("%X", &variableOfXType);//

// where %X is the format specifier in C
// It is a way to tell the compiler 
// what type of data is in a variable 

// and

// & is the address operator in C,
// which tells the compiler to change the 
// real value of this variable, stored at this 
// address in the memory.

int integer;
printf("Enter integer ");
scanf("%d",&integer);
printf("value=%d",integer);



}