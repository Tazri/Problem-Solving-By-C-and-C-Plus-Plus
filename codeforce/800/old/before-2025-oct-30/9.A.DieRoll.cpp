// link : https://codeforces.com/problemset/problem/9/A
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
    int y, w;
    cin >> y >> w;
    int mn = min(y, w);
    int mx = max(y, w);
    int p = 6;

    p = 6 - mx + 1;

    cout << (p / gcd(p, 6)) << "/" << (6 / gcd(p, 6)) << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}