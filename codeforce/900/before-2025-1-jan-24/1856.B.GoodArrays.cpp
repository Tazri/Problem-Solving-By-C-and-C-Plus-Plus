// link : https://codeforces.com/problemset/problem/1856/B
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
    ll ones = 0;
    ll extra = 0;

    for (ll i = 0; i < n; i++)
    {
        ll tmp;
        cin >> tmp;
        if (tmp == 1)
        {
            ones++;
        }
        else
        {
            extra += (tmp - 1);
        }
    }

    if (n == 1)
    {
        cout << "NO" << endl;
        return;
    }

    if (ones == 0)
    {
        cout << "YES" << endl;
        return;
    }

    if (ones > extra)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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