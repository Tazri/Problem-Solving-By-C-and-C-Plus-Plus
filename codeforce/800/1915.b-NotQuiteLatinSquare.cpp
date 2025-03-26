// link : https://codeforces.com/problemset/problem/1915/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    char miss = 'A';

    for (int i = 0; i < 3; i++)
    {
        string line;
        cin >> line;

        bool a = false;
        bool b = false;
        bool c = false;
        for (int j = 0; j < line.size(); j++)
        {
            if (line[j] == 'A')
                a = true;
            if (line[j] == 'B')
                b = true;
            if (line[j] == 'C')
                c = true;
        }

        if (!a && b && c)
            miss = 'A';
        else if (a && !b && c)
            miss = 'B';
        else if (a && b && !c)
            miss = 'C';
    }

    cout << miss << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        program();
    }
    return 0;
}