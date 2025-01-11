// link : https://codeforces.com/problemset/problem/1879/B
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

void test()
{
    ll n;
    cin >> n;

    ll aSum, aMin;
    cin >> aMin;
    aSum = aMin;

    for (ll i = 1; i < n; i++)
    {
        ll ai;
        cin >> ai;
        aSum += ai;
        aMin = min(aMin, ai);
    }

    ll bSum, bMin;
    cin >> bMin;
    bSum = bMin;

    for (ll i = 1; i < n; i++)
    {
        ll bi;
        cin >> bi;
        bSum += bi;
        bMin = min(bMin, bi);
    }

    ll cost1 = aSum + (bMin * n);
    ll cost2 = bSum + (aMin * n);
    ll minCost = min(cost1, cost2);
    cout << minCost << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}