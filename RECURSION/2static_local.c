#include <stdio.h>
int fun_static(int n){
    static int x=0; //same result with global variables also;
    if(n>0){
        x++;
        return fun_static(n-1)+x;
    }
}
    int fun_local(int n){
    int x=0; 
    if(n>0){
        x++;
        return fun_local(n-1)+x;
    }

 }	
    int main(){
        int a=5;
        printf("%d",fun_static(a));
        printf("\n");
        printf("%d",fun_local(a));
        return 0;
        

    }




