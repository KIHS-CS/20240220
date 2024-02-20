#include <stdio.h>

int main()
{
    int num;
    printf("½Ð¿é¤J¼h¼Æ:");
    scanf("%d", &num);
    int matrix[100][100]={0};
    int row=0, col=0, k=1;
    int direction=0;
    while (k<=num*num)
    {
        matrix[row][col]=k;
        switch (direction)
        {
        case 0:
            if (col+1<=num-1 && matrix[row][col+1]==0)
                col++;
            else
            {
                direction=1;
                row++;
            }
            break;
        case 1:
            if (row+1<=num-1 && matrix[row+1][col]==0)
                row++;
            else
            {
                direction=2;
                col--;
            }
            break;
        case 2:
            if (col-1>=0 && matrix[row][col-1]==0)
                col--;
            else
            {
                direction=3;
                row--;
            }
            break;
        case 3:
            if (row-1>=0 && matrix[row-1][col]==0)
                row--;
            else
            {
                direction=0;
                col++;
            }
        }
        k++;
    }
    for(row=0;row<num;row++)
    {
        for(col=0;col<num;col++)
            printf("%5d", matrix[row][col]);
        printf("\n");
    }
}
