#include<stdio.h>
/*The formula for the area of a rectangle is 

Area = length*breadth => l*b 
Perimeter=> 2*(length+breath)

input= l=5
        b=2
output= Area=10
        Perimeter=14*/
int main(){
    int l,b,area,peri;
    printf("Enter length ");
    scanf("%d",&l);
    printf("Enter breath ");
    scanf("%d",&b);
    area=l*b;
    peri=2*(l+b);
    printf("Area= %d\nPerimeter= %d",area,peri);
    return 0;

}

