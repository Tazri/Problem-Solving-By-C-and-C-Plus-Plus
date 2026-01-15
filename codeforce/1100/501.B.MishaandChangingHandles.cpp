// link : https://codeforces.com/problemset/problem/501/B
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
    map<string, string> mp;

    map<string, string> history;

    for (int i = 0; i < n; i++)
    {
        string old, newOne;
        cin >> old >> newOne;

        if (history.count(old))
        {
            string oldChange = history[old];
            mp[oldChange] = newOne;
            history[newOne] = oldChange;
        }
        else
        {
            mp[old] = newOne;
            history[newOne] = old;
        }
    }

    cout << mp.size() << endl;
    for (pair<string, string> p : mp)
        cout << p.first << " " << p.second << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}