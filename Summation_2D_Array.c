//Sanzinan Afrose
//ID: 221-35-927
#include <stdio.h>
int main()
{
    int row, column, sum, i, j;

    printf("Please Enter how many row you want in your array: ");
    scanf("%d", &row);

    printf("Please Enter how many column you want in your array: ");
    scanf("%d", &column);

    int matrix[row][column];

    sum = 0;

    printf("Enter element of your array: \n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);

            sum += matrix[i][j];
        }
    }

    printf("Your array is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Summation of all elements of your array is: %d\n\n\n", sum);

    return 0;
}
