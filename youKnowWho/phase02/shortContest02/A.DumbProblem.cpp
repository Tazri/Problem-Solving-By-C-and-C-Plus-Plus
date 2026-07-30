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
    vector<int> left(n);
    vector<int> right(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    left[0] = 0;
    for (int i = 1; i < n; i++)
        if (v[i] < v[left[i - 1]])
            left[i] = i;
        else
            left[i] = left[i - 1];

    right[n - 1] = n - 1;

    for (int i = n - 2; i >= 0; i--)
        if (v[i] < v[right[i + 1]])
            right[i] = i;
        else
            right[i] = right[i + 1];

    for (int i = 1; i < n - 1; i++)
    {
        int li = left[i - 1];
        int ri = right[i + 1];

        if (v[li] < v[i] && v[i] > v[ri])
        {

            cout << "YES" << endl;
            cout << li + 1 << " " << i + 1 << " " << ri + 1 << endl;
            return;
        }
    }

    cout << "NO" << endl;
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