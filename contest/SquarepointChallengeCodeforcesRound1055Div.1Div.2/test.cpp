#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

void solve()
{
    // Code Here
    int n, x;
    cin >> n >> x;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<int> prefix(n + 1);
    prefix[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }

    int ans = 0;
    map<int, int> m;
    m[0] = 1;

    for (int R = 1; R <= n; R++)
    {
        int LM1 = prefix[R] - x;
        if (m[LM1] == 1)
        {
            ans = 1;
            break;
        }
        m[prefix[R]] = 1;
    }

    if (ans == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}