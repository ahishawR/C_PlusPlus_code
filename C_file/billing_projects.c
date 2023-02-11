#include<stdio.h>
#include<string.h>
int main()
{
    char name[30][30],product[30][30],price[10][10],search[20];
    int i,n,c=0;
    printf("/WELCOME TO THE STORE\n HOW MANY PRODUCTS YOUN WANT TO BUY /\nEnter Limit: ");
    scanf("%d",&n);
    printf("------------------------------------\n");

    for(i=0;i<n;i++)
    {
        printf("Enter NAME %d = ",i+1);
        scanf("%s",name[i]);
        printf("PRODUCT NAME ");
        scanf("%s",&product[i]);
        printf("PRICE ");
        scanf("%d",&price[i]);
        printf("\n");
    }

    printf("\nNAME OF THE CANDITATE IN THIS BILLING LIST :\n");
    printf("------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%d. %s\n",i+1,name[i]);
    }

    printf("\nEnter Name to be Searched: ");
    scanf("%s",search);
    for(i=0;i<n;i++)
    {
        if(strcmp(name[i],search)==0)
        {
            c=1;
            break;
        }
    }

    if(c==1)
    {
        printf("\n%s Found at Position '%d'\n THANKYOU ",name[i],i+1);
    }
    else
    {
        printf("\n%s NOT Present in Above billing list\n THANKYOU ",name[i]);
    }
        return 0;
}

