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
    vector<bool> mp(1e3 + 1, false);

    int mn = 1e3;
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        mp[ai] = true;
        mn = min(mn, ai);
        mx = max(mx, ai);
    }

    for (int i = mn; i <= mx; i++)
    {
        if (!mp[i])
        {
            cout << i << endl;
            return;
        }
    }

    cout << mx + 1 << endl;
    return;
}

int main()
{
    optimize();
    program();
    return 0;
}