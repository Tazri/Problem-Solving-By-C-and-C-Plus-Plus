// link : https://codeforces.com/problemset/problem/1328/C
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
    int n;
    cin >> n;
    string x;
    cin >> x;
    string a(n, '0');
    string b(n, '0');

    bool oneFound = false;

    for (char ch : x)
        if (ch == '1')
        {
            oneFound = true;
            break;
        }

    if (!oneFound)
    {
        for (int i = 0; i < n; i++)
            if (x[i] == '2')
            {
                a[i] = '1';
                b[i] = '1';
            }
            else
            {
                a[i] = '0';
                b[i] = '0';
            }

        cout << a << endl;
        cout << b << endl;
        return;
    }

    int fi = -1;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == '2')
        {
            a[i] = '1';
            b[i] = '1';
            continue;
        }

        if (x[i] == '0')
        {
            a[i] = '0';
            b[i] = '0';
            continue;
        }

        a[i] = '0';
        b[i] = '1';
        fi = i + 1;
        break;
    }

    for (int i = fi; i < n; i++)
    {
        a[i] = x[i];
    }

    cout << a << endl;
    cout << b << endl;
}

int main()
{
    optimize();
    int n;
    cin >> n;
    while (n--)
        program();
    return 0;
}