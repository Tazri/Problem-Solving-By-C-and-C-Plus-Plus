// linK : https://codeforces.com/contest/466/problem/A
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
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int mn = n * a;

    int mtake = (n + m - 1) / m;

    int mCost = mtake * b;

    mn = min(mCost, mn);

    int have = mtake * m;

    have -= m;
    int cost = mCost - b;
    int need = n - have;
    cost += (need * a);
    mn = min(mn, cost);

    cout << mn << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}