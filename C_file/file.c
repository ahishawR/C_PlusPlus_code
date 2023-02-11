#include <stdio.h>
#include<string.h>

int main()
{
    char name[20];
    char data[20];
    int point;
    printf("Enter a name ");
    scanf("%s", &name);
    FILE *fptr;
    fptr = fopen("cheak.txt", "r");
    if (fptr != NULL)
    {
        // printf("file open ");
        while (fgets(data, 20, fptr))
        {
            point=strcamp(name, data);
            if(point==0){
                printf("\nIt's found");
            }
            
        }
    }
    return 0;
}
