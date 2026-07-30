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
    vector<int> v(n + 1);
    map<int, pair<int, int>> mp;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];

        if (mp.count(v[i]))
        {
            mp[v[i]].second = i;
        }
        else
        {
            mp[v[i]].first = i;
            mp[v[i]].second = i;
        }
    }

    while (q--)
    {
        int qi;
        cin >> qi;

        if (mp.count(qi))
            cout << mp[qi].first << " " << mp[qi].second << endl;
        else
            cout << -1 << " " << -1 << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}