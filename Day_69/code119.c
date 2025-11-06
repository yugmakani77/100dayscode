/*
Q119: Write a program to take an integer array as input.
Only one element will be repeated. Print the repeated element.
Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1
*/

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums1[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums1[i]);
    }

    int visited[n];
    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        if (visited[nums1[i]] == 1)
        {
            printf("nums1 = [");
            for (int j = 0; j < n; j++)
            {
                printf("%d", nums1[j]);
                if (j != n - 1)
                    printf(",");
            }
            printf("]\nOutput = %d\n", nums1[i]);
            break;
        }
        else
        {
            visited[nums1[i]] = 1;
        }
    }

    return 0;
}
