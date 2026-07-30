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

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> perm;
    perm.reserve(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (i != 0)
        {
            perm.push_back(v[i - 1] - v[i]);
        }
    }

    vector<int> mids;
    mids.reserve(n);

    for (int i = 1; i < perm.size(); i++)
    {
        int d = perm[i - 1] - perm[i];
        d /= 2;
        mids.push_back(d);
    }

    int last = v[0];
    for (int i = 0; i < mids.size(); i++)
        last -= (mids[i] * (i + 1));

    last = last / (n - 1);

    mids.push_back(last);

    int first = perm[0];
    for (int &pi : mids)
        first -= pi;
    first *= -1;

    vector<int> ans;
    ans.reserve(n);
    ans.push_back(first);

    for (int &mi : mids)
        ans.push_back(mi);

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
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