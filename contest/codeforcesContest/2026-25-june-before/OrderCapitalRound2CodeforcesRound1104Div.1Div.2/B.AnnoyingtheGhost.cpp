#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define FAST()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void program()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> v(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v[i] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i] > b[i])
        {
            cout << -1 << endl;
            return;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int fi = -1;
        for (int j = i; j < n; j++)
        {
            if (a[j] <= b[i])
            {
                fi = j;
                break;
            }
        }

        if (fi == -1)
        {
            cout << -1 << endl;
            return;
        }

        ans += fi - i;

        for (int k = fi; k > i; k--)
        {
            swap(a[k], a[k - 1]);
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    FAST();

    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}