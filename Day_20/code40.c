/*
Q40: Write a program to find the 1’s complement of a binary number and print it.
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/

#include <stdio.h>

int main()
{
    int n, reversed = 0, digit, result = 0, place = 1;
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        if (digit == 0)
        {
            digit = 1;
        }
        else if (digit == 1)
        {
            digit = 0;
        }
        else
        {
            printf("Invalid binary number\n");
            return 0;
        }
        result = result * 10 + digit;
        n /= 10;
    }

    while (result != 0)
    {
        digit = result % 10;
        reversed = reversed * 10 + digit;
        result /= 10;
    }

    printf("%d\n", reversed);
    return 0;
}
