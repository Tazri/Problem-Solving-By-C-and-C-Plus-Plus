#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    vector<int> pre(n + 1);
    vector<int> pospre(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pre[i] = v[i];
        pospre[i] = v[i] < 0 ? v[i] * -1 : v[i];

        pre[i] += pre[i - 1];
        pospre[i] += pospre[i - 1];
    }

    int select = -1;
    int mx = pre.back();

    for (int i = 1; i <= n; i++)
    {
        if (v[i] < 0)
            continue;

        int sum = pre.back();
        int isum = sum - pre[i] + pospre[i - 1] - v[i];

        if (isum > mx)
        {
            mx = isum;
            select = i;
        }
    }

    if (select == -1)
    {
        cout << 0 << endl;
        cout << endl;
        return;
    }

    vector<int> op;
    op.reserve(n);
    int flip = 0;
    for (int i = select - 1; i >= 1; i--)
    {
        int vi = v[i];
        if (flip & 1)
            vi *= -1;

        if (vi < 0)
            continue;

        op.push_back(i);
        flip++;
    }

    op.push_back(select);
    cout << op.size() << endl;
    for (int i = 0; i < op.size(); i++)
        cout << op[i] << " \n"[i == op.size() - 1];
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
