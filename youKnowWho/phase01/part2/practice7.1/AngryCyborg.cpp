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
    int n, k;
    cin >> n >> k;

    vector<int> rm(n + 2, 0);
    vector<int> add(n + 2, 0);
    vector<int> ans(n + 1, 0);

    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;
        add[l] += 1;
        add[r + 1] -= 1;
        int len = r - l + 1;
        rm[r + 1] -= len;
    }

    for (int i = 1; i <= n; i++)
        add[i] += add[i - 1];

    // for (int i = 1; i <= n; i++)
    //     cout << add[i] << " \n"[i == n];

    for (int i = 1; i <= n; i++)
    {
        ans[i] = ans[i - 1] + rm[i] + add[i];
    }

    // cout << "rm : " << endl;
    // for (int i = 1; i <= n; i++)
    //     cout << rm[i] << " \n"[i == n];

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
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