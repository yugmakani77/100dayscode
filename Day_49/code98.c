/*
Q98: Print initials of a name with the surname displayed in full.
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], words[10][20];
    int i = 0, j = 0, k = 0;
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            words[k][j++] = str[i];
        }
    }
    words[k][j] = '\0';
    for (i = 0; i < k; i++)
        printf("%c.", words[i][0]);
    printf("%s", words[k]);
    return 0;
}
