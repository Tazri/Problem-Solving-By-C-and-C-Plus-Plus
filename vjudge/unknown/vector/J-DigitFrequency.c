#include<stdio.h>

void program()
{
    char s[1010];
    int freq[10];
    for(int i = 0;i < 10;i++)freq[i] =0;

    scanf("%s",s);
    getchar();

    for (int i = 0;s[i] != '\0';i++)
    {
        char ch = s[i];
        if ((int)ch >= (int)'0' && (int)ch <= (int)'9')
        {
            int chi = (int)ch - (int)'0';
            freq[chi]++;
        }
    }

    printf("%d",freq[0]);
    for (int i = 1; i < 10; i++)
        printf(" %d",freq[i]);
    printf("\n");
}

int main()
{
    program();
    return 0;
}