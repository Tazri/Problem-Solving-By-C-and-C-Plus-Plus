#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int flip = 0;

    vector<int> op;
    op.reserve(n);
    for (int i = n - 1; i >= 0; i--)
    {
        if (flip & 1)
            v[i] *= -1;

        if (v[i] > 0)
        {
            flip++;
            op.push_back(i + 1);
        }
    }

    cout << op.size() << endl;
    if (op.size() <= 0)
        cout << endl;
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