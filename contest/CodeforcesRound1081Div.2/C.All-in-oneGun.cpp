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

#define int ll

int can(vector<int> &v, int h)
{
    int n = v.size() - 1;
    vector<int> pre(n + 1);
    vector<int> premn(n + 1);
    vector<int> suffmx(n + 1);

    for (int i = 1; i <= n; i++)
    {
        premn[i] = v[i];
        suffmx[i] = v[i];
        pre[i] = pre[i - 1] + v[i];
    }

    for (int i = 2; i <= n; i++)
    {
        premn[i] = min(v[i], premn[i - 1]);
    }
    for (int i = n - 1; i >= 1; i--)
    {
        suffmx[i] = max(suffmx[i + 1], suffmx[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            if (pre[i] >= h)
                return 1;
            continue;
        }

        int sum = pre[i - 1] - premn[i - 1] + suffmx[i];

        if (sum >= h)
            return i - 1;
        if (pre[i] >= h)
            return i;
    }

    return n;
}

void program()
{
    int n, h, k;
    cin >> n >> h >> k;
    vector<int> v(n + 1);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    if (h % sum == 0)
    {
        int totalReload = (h / sum) - 1;
        cout << (totalReload * k) + (totalReload + 1) * n << endl;
        return;
    }
    else
    {
        int totalReload = (h / sum);
        int ans = (totalReload * k) + totalReload * n;
        // cout << "ans  : " << ans << endl;

        int r = (h % sum);
        // cout << "r : " << r << endl;
        int extra = can(v, r);
        ans += extra;
        // cout << "extra : " << extra << endl;
        // cout << "ans : " << ans << endl;
        cout << ans << endl;
    }

    // cout << can(v, h) << endl;
    ;
}

void tmp()
{
    int n, h, k;
    cin >> n >> h >> k;
    vector<int> v(n + 1);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        sum += v[i];
    };
}

void prnt(int caseno)
{
    int n, h, k;
    cin >> n >> h >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << n << " " << h << " " << k << endl;
    for (int vi : v)
        cout << vi << " ";
    cout << endl;
};

int32_t main()
{
    optimize();
    int t;
    cin >> t;

    // if (t != 9875)
    // {
    while (t--)
        program();
    // }
    // else
    // {
    //     for (int i = 1; i <= t; i++)
    //     {
    //         if (i != 3382)
    //             tmp();
    //         else
    //             prnt(i);
    //     }
    // }

    return 0;
}