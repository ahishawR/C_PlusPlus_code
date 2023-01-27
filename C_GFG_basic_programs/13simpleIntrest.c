/*SIMPLE INTREST 
FORMULA= (P * T * R) / 100;
P=principle
T=time
R=rate*/
#include<stdio.h>
float si(float t,float r,float p){
    float si=(p*t*r)/100;
    return si;
}

int main(){
float p,t,r;
printf("Enter Principle ");
scanf ("%f",&p);
printf("Enter time ");
scanf ("%f",&t);
printf("Enter rate ");
scanf ("%f",&r);
printf("Simple intrest= %.2f",si(p,t,r));
}