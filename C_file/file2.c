#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;// file pointer 
    char word[30];//comparing each name with given one
    char ch;
    char *filename = "cheak.txt";//file 
    char search[30];//name to search
    int count = 0;

    printf("Enter a name ");
    scanf("%s",&search);
    fp = fopen(filename, "r");

    do
    {
        ch = fscanf(fp, "%s", word);
        if (strcmp(word, search) == 0)
        {
            count++;
        }
        //printf("\n word %s",word);
    } while (ch != EOF);//EOF means end of file is reached

    if (count == 0)
        printf(" NOT FOUND \n");
    else
        printf(" IT'S FOUND ");
    fclose(fp);// after workdone need to close the pointer,pointing to the file
    return 0;

}