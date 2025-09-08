#include <stdio.h>
#include <string.h>

typedef struct
{
    char regis[40];
    char name[40];
    char point[40];
    int index;
} Student;

void print(Student s1)
{
    printf("%s %s %s\n", s1.regis, s1.name, s1.point);
}

void program()
{
    int n;
    scanf("%d", &n);
    getchar();

    Student s[n];

    for (int i = 0; i < n; i++)
        scanf("%s %s %s\n", s[i].regis, s[i].name, s[i].point);

    // apply selection sort
    for (int i = 0; i < n; i++)
    {
        int select = i;

        for (int j = i + 1; j < n; j++)
        {
            int cmp = strcmp(s[select].name, s[j].name);

            if (cmp == 0)
            {
                if (s[select].index < s[j].index)
                {
                    select = j;
                }
            }
            else if (cmp > 0)
            {
                select = j;
            }
        }

        // now swap.
        Student temp = s[select];
        s[select] = s[i];
        s[i] = temp;
    }

    // print all
    for (int i = 0; i < n; i++)
        print(s[i]);
}

int main()
{

    program();
    return 0;
}