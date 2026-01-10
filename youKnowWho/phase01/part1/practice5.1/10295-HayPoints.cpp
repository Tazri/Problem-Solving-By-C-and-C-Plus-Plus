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
    ll m, n;
    cin >> m >> n;
    map<string, ll> mp;

    for (int i = 0; i < m; i++)
    {
        string word;
        ll v;
        cin >> word >> v;
        mp[word] = v;
    }

    while (n--)
    {
        ll sum = 0;
        while (true)
        {
            string w;
            cin >> w;
            if (w == ".")
                break;

            if (mp.count(w))
                sum += mp[w];
        }
        cout << sum << endl;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}