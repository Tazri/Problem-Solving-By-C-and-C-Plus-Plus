// link : https://codeforces.com/contest/1579/problem/A
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

void program()
{
    string s;
    cin >> s;
    int a = 0;
    int b = 0;
    int c = 0;

    for (char ch : s)
    {
        if (ch == 'A')
            a++;
        else if (ch == 'B')
            b++;
        else
            c++;
    }

    if (a + c == b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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