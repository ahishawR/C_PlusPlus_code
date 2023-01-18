#include <stdio.h>
void fun(int n){ 
    //first calling then printing.
    if(n>0){
        fun(n-1);
        printf("%d ",n);
    }
}

    void fun1(int n){ 
    //first printing then calling.
    if(n>0){
        printf("%d ",n);
        fun1(n-1);

    }
}
        void main(){
            int a=3;
            fun(a);//head recursion;
            printf("\n");
            fun1(a);//tail recursion;
        }


