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
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int mx = v[1];

    for (int i = 1; i <= n; i++)
    {
        mx = max(mx, v[i]);

        if (i % 2 == 0)
            v[i] = mx;
    }

    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (i & 1)
        {
            if (v[i] < v[i + 1])
                continue;

            int d = v[i] - v[i + 1];
            d++;
            ans += d;
            v[i] -= d;
            continue;
        }

        if (v[i] > v[i + 1])
            continue;
        int d = v[i + 1] - v[i];
        d++;
        ans += d;
        v[i + 1] -= d;
    }

    // for (int &vi : v)
    //     cout << vi << " ";
    // cout << endl;
    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}