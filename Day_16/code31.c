/*
Q31: Write a program to take a number as input and print its equivalent
binary representation.
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111
*/

#include <stdio.h>

int main()
{
    int n, i, bin[32], index = 0;
    scanf("%d", &n);

    if (n == 0)
    {
        printf("0\n");
        return 0;
    }

    while (n > 0)
    {
        bin[index++] = n % 2;
        n /= 2;
    }

    for (i = index - 1; i >= 0; i--)
    {
        printf("%d", bin[i]);
    }
    printf("\n");

    return 0;
}
