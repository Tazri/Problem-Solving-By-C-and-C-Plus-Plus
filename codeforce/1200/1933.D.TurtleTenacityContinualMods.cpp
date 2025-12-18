// link : https://codeforces.com/problemset/problem/1933/D
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
    map<int, int> mp;
    int mn;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        if (i == 0)
            mn = v[i];
        mn = min(v[i], mn);
    }

    if (mp.count(1))
    {
        int cnt = mp[1];

        if (cnt == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }

    if (mp[mn] == 1)
    {
        cout << "YES" << endl;
        return;
    }

    for (int vi : v)
    {
        if (vi % mn != 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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