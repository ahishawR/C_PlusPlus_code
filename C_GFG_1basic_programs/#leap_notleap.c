#include<stdio.h>
#include<stdlib.h>
char year[3];
int main(){
    /*Expected:
    input=29 12 2003
    output=It's December and 2003 is not a leap year .
    input=28 07 2004
    output= It's July and 2004 is leap year .*/
    
    char arr[10];
    printf("Enter a date in form DD MM YYYY.");
    gets(arr);// Taking input;

    if(arr[2]!=' '||arr[5]!=' '){ //Cheaking order of input;
        printf("ERROR");
        return 0;
    }
        if(arr[0]>='3'&&arr[1]>'1'){ 
        printf("ERROR");
        return 0;
    }
    
    //Cheaking which month is belong to the given date;
    
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

    //Initialising year;
    for(char i=6,j=0;i<10,j<4;i++,j++){
        year[j]=arr[i];
    }

    int num=atoi(year);//Making string year into a variable;

    //Cheaking weather year is leap or not;
    if(num%4==0){printf(" and %d a is leap year .",num);}
    else {printf(" and %d not a leap year .",num);}
    return 0;
}
