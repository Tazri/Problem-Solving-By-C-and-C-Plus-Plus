// link :https://codeforces.com/contest/151/problem/A
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
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int a = (k * l) / nl;
    int b = c * d;
    int cc = p / np;

    int mn = min(a, min(b, cc));

    cout << (mn / n) << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}