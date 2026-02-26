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
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> sv(n);
    int mn = 0;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sv[i] = v[i];
    }
    sort(sv.begin(), sv.end());

    for (int i = 0; i < n; i++)
    {
        if (sv[i] == v[i])
            continue;
        if (i == 0)
        {
            mn = v[i];
            mx = v[i];
        }

        mn = min(v[i], mn);
        mx = max(v[i], mx);
    }

    bool sorted = true;
    for (int i = 1; i < n; i++)
        if (v[i - 1] > v[i])
        {
            sorted = false;
            break;
        }

    if (sorted)
    {
        cout << -1 << endl;
        return;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a = v[i];
        int b = sv[i];

        if (a == b)
            continue;

        int x = min({abs(a - mn), abs(b - mx)});

        if (ans == 0)
            ans = x;
        ans = max(ans, x);
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}