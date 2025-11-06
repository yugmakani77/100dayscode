/*
Q33: Write a program to check if a number is an Armstrong number.
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/

#include <stdio.h>

int main()
{
    int n, original, temp, digit, sum = 0, count = 0, i, power;

    scanf("%d", &n);
    original = n;
    temp = n;

    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0)
    {
        digit = temp % 10;
        power = 1;
        for (i = 0; i < count; i++)
        {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }

    if (sum == original)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }

    return 0;
}
