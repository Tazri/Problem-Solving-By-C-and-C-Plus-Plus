// link : https://codeforces.com/contest/1741/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define int ll
int d = (int)'z' - (int)'a' + 1;

void space(int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << " ";
    }
}

void program()
{
    string a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << '=' << endl;
        return;
    }

    int ax = 0;
    int bx = 0;

    for (char ch : a)
    {
        if (ch == 'X')
            ax++;
    }

    for (char ch : b)
    {
        if (ch == 'X')
            bx++;
    }

    if (a.back() == b.back())
    {
        int bck = a.back();

        if (bck == 'S')
        {
            if (ax > bx)
                cout << '<' << endl;
            else
                cout << '>' << endl;
        }
        else
        {
            if (ax < bx)
                cout << '<' << endl;
            else
                cout << '>' << endl;
        }

        return;
    }

    if (a.back() != 'M' && b.back() != 'M')
    {
        if (a.back() == 'S')
            cout << '<' << endl;
        else
            cout << '>' << endl;
        return;
    }

    if (a.back() == 'M')
    {
        if (b.back() == 'L')
            cout << '<' << endl;
        else
            cout << '>' << endl;
        return;
    }

    if (a.back() == 'S')
        cout << '<' << endl;
    else
        cout << '>' << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}