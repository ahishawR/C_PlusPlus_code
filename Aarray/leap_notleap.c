#include<stdio.h>
#include<stdlib.h>
char year[3];
int main(){
    char arr[10];
    printf("Enter a date in form DD MM YYYY.");
    gets(arr);

    if(arr[2]!=' '||arr[5]!=' '){
        printf("ERROR");
        return 0;
    }

    if(arr[3]=='0'&&arr[4]=='1'){printf("It's January ");}
    else if(arr[3]=='0'&&arr[4]=='2'){printf("It's Febuary");}
    else if(arr[3]=='0'&&arr[4]=='3'){printf("It's March");}
    else if(arr[3]=='0'&&arr[4]=='4'){printf("It's April");}
    else if(arr[3]=='0'&&arr[4]=='5'){printf("It's May");}
    else if(arr[3]=='0'&&arr[4]=='6'){printf("It's June");}
    else if(arr[3]=='0'&&arr[4]=='7'){printf("It's July");}
    else if(arr[3]=='0'&&arr[4]=='8'){printf("It's August");}
    else if(arr[3]=='0'&&arr[4]=='9'){printf("It's September");}
    else if(arr[3]=='1'&&arr[4]=='0'){printf("It's october");}
    else if(arr[3]=='1'&&arr[4]=='1'){printf("It's November");}
    else if(arr[3]=='1'&&arr[4]=='2'){printf("It's December");}
    else {printf("ERROR"); return 0;}

    for(char i=6,j=0;i<10,j<4;i++,j++){
        year[j]=arr[i];
    }//puts(year);
    int num=atoi(year);
    //printf("\n year %d",num);
    if(num/4==0){printf("and %d is leap year .",num);}
    else {printf("and %d not a leap year .",num);}
    return 0;

     


    
}
