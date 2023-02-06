#include<stdio.h>
#include<string.h>
int main(){
    int p=1;

    char  str[1][30]={0};
    char new[30][30]={0};
    printf("Hi, Welcome to shop\n");
    printf("please enter data like \n name item price \n");
    do{

    printf("enter please again\n ");      

    scanf("\n%s",&str) ; 
    for(int i =0;i<30;i++){
        for(int j=0;j<30;j++){

                new[i][j]=str[0][j];
        }
    }printf("/n/n  want to continue 1,or else 0 ");
    printf("------------------------------------");
    scanf("%d",&p);
}while(p!=0);
getch();
return 0;
}