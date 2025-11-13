// https : // codeforces.com/contest/1186/problem/A
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
    ll n, m, k;
    cin >> n >> m >> k;

    ll mn = min(m, k);

    if (mn >= n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    optimize();

    program();
    return 0;
}