// link : https://codeforces.com/problemset/problem/1511/C
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
    int n, q;
    cin >> n >> q;
    vector<int> mp(51, 0);
    vector<int> ans(q);

    for (int i = 1; i <= n; i++)
    {
        int ai;
        cin >> ai;

        if (mp[ai])
            continue;
        mp[ai] = i;
    }

    for (int i = 0; i < q; i++)
    {
        int c;
        cin >> c;
        int pos = mp[c];
        ans[i] = pos;

        for (int i = 1; i <= 50; i++)
        {
            if (mp[i] == 0 || i == c)
                continue;

            if (mp[i] < pos)
                mp[i]++;
        }

        mp[c] = 1;
    }

    cout << ans[0];
    for (int i = 1; i < q; i++)
        cout << " " << ans[i];
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}