// link : https://www.spoj.com/problems/KOIREP/en/
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

struct Person
{
    int ability;
    int cls;
};

void program()
{
    int n, m;
    cin >> n >> m;
    vector<Person> all;
    all.reserve(n * m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            Person p;
            cin >> p.ability;
            p.cls = i;
            all.push_back(p);
        }
    }

    sort(all.begin(), all.end(), [](Person left, Person right)
         { return left.ability < right.ability; });

    map<int, int> mp;
    int ans = all.back().ability - all[0].ability;
    int l = 0, r = 0;
    while (r < n * m)
    {
        Person pr = all[r];
        mp[pr.cls]++;

        if (mp.size() < n)
        {
            r++;
            continue;
        }

        while (mp.size() == n)
        {
            Person pl = all[l];
            mp[pl.cls]--;

            if (mp[pl.cls] == 0)
            {
                mp.erase(pl.cls);
            }

            int diff = pr.ability - pl.ability;
            ans = min(ans, diff);
            l++;
        }

        r++;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}