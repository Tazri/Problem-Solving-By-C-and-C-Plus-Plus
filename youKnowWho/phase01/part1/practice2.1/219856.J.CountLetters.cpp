// link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
#include <stdio.h>

#define MAX 10000123
char s[MAX];
int count[26];

char digitToLetter(int digit)
{
    return (char)((char)'a' + digit);
}

int letterToDigit(char ch)
{
    return (int)ch - (int)'a';
}

int main()
{
    scanf("%s", s);

    int i = 0;
    while (s[i] != '\0')
    {
        char ch = s[i];
        int digit = letterToDigit(s[i++]);
        count[digit]++;
    }

    for (int j = 0; j < 26; j++)
    {
        char ch = digitToLetter(j);
        if (count[j])
            printf("%c : %d\n", ch, count[j]);
    }
    return 0;
}