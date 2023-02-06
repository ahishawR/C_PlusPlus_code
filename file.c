#include <stdio.h>
#include<string.h>

int main()
{
    char name[20];
    char data[500];
    int point;
    printf("Enter a name ");
    scanf("%s", &name);
    FILE *fptr;
    fptr = fopen("cheak.txt", "r");
    if (fptr != NULL)
    {
        // printf("file open ");
        while (fgets(data, 500, fptr))
        {
            point=strcamp(name, data);
            if(point==0){
                printf("\nIt's found");
            }
            
        }
    }
    return 0;
}
