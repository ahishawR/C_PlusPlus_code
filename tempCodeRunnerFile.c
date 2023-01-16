#include<stdio.h>
//we can't call function inside ternary; 
/*we can't conditional statements except ternary to make a code for (d) for week names (days) from 1to 7
 and (m)for month names from 1 to 12;
*/
void day(int d){

    (d==1)?printf("MONDAY"):printf("");
    (d==2)?printf("TUESDAY"):printf("");
    (d==3)?printf("WEDNESDAY"):printf("");
    (d==4)?printf("THURSDAY"):printf("");
    (d==5)?printf("FRIDAY"):printf("");
    (d==6)?printf("SATURDAY"):printf("");
    (d==7)?printf("SUNDAY"):printf("");
 
}
void month(int m){

    (m==1)?printf("JANUARY"):printf("");
    (m==2)?printf("FEBUARY"):printf("");
    (m==3)?printf("MARCH"):printf("");
    (m==4)?printf("APRIL"):printf("");
    (m==5)?printf("MAY"):printf("");
    (m==6)?printf("JUNE"):printf("");
    (m==7)?printf("JULY"):printf("");
    (m==8)?printf("AUGUST"):printf("");
    (m==9)?printf("SEPTEMBER"):printf("");
    (m==10)?printf("OCTOBER"):printf("");
    (m==11)?printf("NOVENBER"):printf("");
    (m==12)?printf("DECEMBER"):printf("");
}
int main(){
    int d,m,n;
    char cheak,cheak2;
    do{
        printf("\nEnter (d) for day and (m) for month\n");
        scanf("\n%c",&cheak);

        while(cheak=='d'){
            printf("Enter any from 1 to 7\n ");
            scanf(" %d",&d);
            day(d);
            break;
        
        }
            while(cheak=='m'){
                printf("Enter any from 1 to 12\n ");
                scanf("%d",&m);
                month(m);
                break;
        
            }       n=1;
                    while(n>0){
                        
                        printf("\nWant to continue enter (1)or else(0)");
                        scanf("%d",&cheak2);
                        n--;
                    }
                
    }while(cheak2!=0);
    printf("THANKYOU");
return 0;
}