// link : https://codeforces.com/contest/1931/problem/E
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int cntf0(int n)
{
    int cnt = 0;

    while (n % 10 == 0)
    {
        cnt++;
        n /= 10;
    }

    return cnt;
}

int cntf(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        n /= 10;
    }

    return cnt;
}

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    v.reserve(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        int cnt = cntf(vi);
        sum += cnt;
        int cnt0 = cntf0(vi);
        if (cnt0)
            v.push_back(cnt0);
    }

    n = v.size();

    sort(v.begin(), v.end());
    bool isAnnaTurn = true;
    while (v.size() > 0)
    {
        if (isAnnaTurn)
            sum -= v.back();

        v.pop_back();
        isAnnaTurn = !isAnnaTurn;
    }

    if (sum > m)
        cout << "Sasha" << endl;
    else
        cout << "Anna" << endl;
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