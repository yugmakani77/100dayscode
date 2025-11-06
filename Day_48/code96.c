/*
Q96: Reverse each word in a sentence without changing the word order.
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/

#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end)
{
    char temp;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char str[200];
    int i = 0;
    gets(str);
    char *word_start = str;
    while (1)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            reverse(word_start, &str[i - 1]);
            if (str[i] == '\0')
                break;
            word_start = &str[i + 1];
        }
        i++;
    }
    printf("%s", str);
    return 0;
}
