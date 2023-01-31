/*TAYLOR SERIES------>
    (e^x) = 1+(x/1)+(x^2/2!)+(x^3/3!)+(x^4/4!)+......+n
        Three operations performing-->
        1)submission of terms---sun(n-1)+n
        2)power of (x) is rising by one everytime---power(x,n-1)*x
        3)in the denominator factorial factor is there---fact(n-1)*n
        
        Function will return only one result. So need to involve a static variable for involving multiple values
         */
#include<stdio.h>
//Taylor Series 
double e(int x, int n){
 static double p=1,f=1;
 double r;
 
 if(n==0)
 return 1;
 r=e(x,n-1);
 p=p*x;
 f=f*n;
 return r+p/f;
}
int main(){
 printf("%lf \n",e(4,15));
 return 0;
}
