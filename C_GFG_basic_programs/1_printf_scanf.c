#include<stdio.h>
void main(){
    //Question: C Program To Print Your Own Name
// Here, we can use the 2 different approaches to print the name:

// Using printf()
// Using scanf()
char name[20];
printf("1st name please ");
scanf("%s",&name);//if we use %c only 1st character is printed;so %s is used 
printf("Hi,%s",name);//%s will take input till space entered;


}
