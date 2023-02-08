#include <stdio.h>

int multipication(int num, int range)
{

    // Taking two integer variables row and column
    int row, col;

    // Initializing row with range of the multiplication
    // table.
    row = range;

    // Initializing column with 3.
    col = 3;

    // Creating a 2-D array to calculate and store the
    // Multiplication Table .
    int arr[row][col];

    // For loop to calculate the table
    for (int k = 0; k < row; k++)
    {
        // Storing the number in the first column.
        arr[k][0] = num;

        // Storing the value to be multiplied in the second
        // column.
        arr[k][1] = k + 1;

        // Calculating and Storing the product in the third
        // column.
        arr[k][2] = arr[k][1] * arr[k][0];
    }

    // For loop to print the Multiplication table
    for (int i = 0; i < row; i++)
    {
        printf("%d * %d = %d\n", arr[i][0] , arr[i][1] , arr[i][2]);
    }
}
int main()
{
    /*C Program to Generate Multiplication Table
    there are two methods
    1) with a loop
    2)with the help of 2d array
    */

    // 1) by loop-->
    int multi, num;
    printf("Enter a number for multipication table ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        multi = num * i;
        printf("\n %d * %d = %d", num, i, multi);
    }

    // 2) 2d array-->
    int num1, range;
    printf("\nEnter a num for multipication ");
    scanf("%d", &num1);
    printf("range of the table");
    scanf("%d", &range);
    multipication(num1,range);
    return 0;
}