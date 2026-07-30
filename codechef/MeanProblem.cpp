// link : https://www.codechef.com/problems/MEANPROB
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v;
    v.reserve((n * n) + 123);
    v.push_back(0);
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int vi;
        cin >> vi;
        v.push_back(vi);
        sum += vi;
    }

    int prev = v.back();
    int cnt = 1;
    int li = 1;
    while (cnt < n)
    {
        int vi = sum / n;
        v.push_back(vi);
        sum += vi;
        sum -= v[li];
        li++;

        if (prev == vi)
            cnt++;
        else
        {
            cnt = 1;
            prev = vi;
        }
    }

    // for (int i = 1; i < v.size(); i++)
    //     cout << v[i] << " \n"[v.size() - 1 == i];

    int q;
    cin >> q;
    while (q--)
    {
        int xi;
        cin >> xi;
        if (xi >= v.size())
            cout << v.back() << endl;
        else
            cout << v[xi] << endl;
    }
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}