// linK : https://codeforces.com/contest/1335/problem/B
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
    int n, a, b;
    cin >> n >> a >> b;

    string s(n, '.');

    char ch = 'a';
    for (int i = 0; i < b; i++)
    {
        s[i] = ch;
        ch++;
    }

    for (int l = 0, r = b - 1; l < r; l++, r--)
    {
        swap(s[l], s[r]);
    }

    for (int i = b; i < a; i++)
    {
        s[i] = 'a';
    }

    for (int i = a, l = 0; i < n; i++, l++)
    {
        s[i] = s[l];
    }

    cout << s << endl;
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