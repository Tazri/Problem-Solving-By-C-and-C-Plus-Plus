// link : https://codeforces.com/gym/106592/problem/C
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

bool check(vector<int> &v, int n, int x)
{
    int sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        sum += min(v[i], x);
    }

    return sum <= n;
}

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;

    vector<int> v(k);

    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    int left = 0;
    int right = sum;
    int fx = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (check(v, n, mid))
        {
            fx = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    int sm = 0;
    vector<int> b(k);
    for (int i = 0; i < k; i++)
    {
        b[i] = min(v[i], fx);
        sm += b[i];
    }

    for (int i = 0; i < k; i++)
    {
        if (sm == n)
            break;

        if (b[i] != fx)
            continue;

        if (b[i] == v[i])
            continue;

        b[i]++;
        sm++;
    }

    for (int i = 0; i < k; i++)
        cout << b[i] << " \n"[i == k - 1];
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