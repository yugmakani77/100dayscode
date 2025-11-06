/*
Q74: Find the transpose of a matrix.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6
*/

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d", mat[j][i]);
            if (j != r - 1)
                printf(" ");
        }
        if (i != c - 1)
            printf("\n");
    }
    return 0;
}
