// link : https://codeforces.com/problemset/problem/2104/C
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
    string s;
    cin >> n;
    cin >> s;

    int a = 0;
    int b = 0;

    for (char ch : s)
        if (ch == 'A')
            a++;
        else
            b++;

    if (s[0] == 'B' && s[n - 1] == 'B')
        a = 0;
    else if (s[n - 1] == 'B' && b >= 2)
        a = 0;
    else if (n == 2 && s[0] == 'B')
        a = 0;
    else if (s[0] == 'B' && s[n - 2] == 'B')
        a = 0;
    else
        b = 0;

    if (a == 0)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
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