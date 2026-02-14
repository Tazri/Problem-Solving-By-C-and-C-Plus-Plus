// link: https://codeforces.com/problemset/problem/387/A
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

int c(char ch)
{
    return (int)((int)ch - (int)'0');
}

pair<int, int> parse(string s)
{
    int h = (c(s[0]) * 10) + c(s[1]);
    int m = (c(s[3]) * 10) + c(s[4]);

    return {h, m};
}

void program()
{
    string s;
    string t;

    cin >> s;
    cin >> t;

    auto [h1, m1] = parse(s);
    auto [h2, m2] = parse(t);

    int rm = m2 > m1;
    h1 -= (h2 + rm);
    m1 -= m2;

    h1 = ((h1 % 24) + 24) % 24;
    m1 = ((m1 % 60) + 60) % 60;

    if (h1 < 10)
        cout << '0' << h1;
    else
        cout << h1;
    cout << ":";
    if (m1 < 10)
        cout << '0' << m1;
    else
        cout << m1;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}