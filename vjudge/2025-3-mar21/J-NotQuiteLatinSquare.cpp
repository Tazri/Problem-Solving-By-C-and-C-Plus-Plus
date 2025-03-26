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
        bool a = false;
        bool b = false;
        bool c = false;

        string s;
        cin >> s;
        for (char ch : s)
        {
            if (ch == 'A')
                a = true;
            else if (ch == 'B')
                b = true;
            else if (ch == 'C')
                c = true;
        }

        if (!a)
            miss = 'A';
        else if (!b)
            miss = 'B';
        else if (!c)
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
        program();
    return 0;
}