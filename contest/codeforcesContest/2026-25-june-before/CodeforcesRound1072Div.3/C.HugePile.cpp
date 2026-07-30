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

    map<int, int> mp;
    mp[n] = 0;

    queue<int> q;
    set<int> visited;
    visited.insert(n);
    q.push(n);

    while (q.size())
    {
        int qi = q.front();
        q.pop();

        vector<int> v = {qi / 2, (qi + 1) / 2};

        for (int to : v)
        {
            if (visited.count(to))
                continue;
            mp[to] = 1 + mp[qi];
            visited.insert(to);
            q.push(to);
        }

        if (v[0] == k || v[1] == k)
            break;
    }

    if (mp.count(k))
        cout << mp[k] << endl;
    else
        cout << -1 << endl;
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