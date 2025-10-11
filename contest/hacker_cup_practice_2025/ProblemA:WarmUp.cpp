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

struct Dish
{
    int req;
    int temp;
    int index;
};

void program(int c)
{
    cout << "Case #" << c << ": ";

    int n;
    cin >> n;
    vector<Dish> d(n + 1);
    vector<pair<int, int>> ans;
    ans.reserve(n);
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> d[i].temp;
        d[i].index = i;
        mp[d[i].temp] = i;
    }

    for (int i = 1; i <= n; i++)
        cin >> d[i].req;

    sort(d.begin(), d.end(), [](Dish a, Dish b)
         { return a.temp < b.temp; });

    for (Dish di : d)
    {
        if (di.req < di.temp)
        {
            cout << -1 << endl;
            return;
        }

        if (di.req == di.temp)
            continue;

        if (!mp.count(di.req))
        {
            cout << -1 << endl;
            return;
        }

        ans.push_back({di.index, mp[di.req]});
    }

    cout << ans.size() << endl;

    for (pair<int, int> ai : ans)
        cout << ai.first << " " << ai.second << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        program(i);
    return 0;
}