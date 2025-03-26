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

struct Point
{
    int x;
    int y;

    bool operator<(const Point &o) const
    {
        if (x == o.x)
            return y < o.y;
        return x < o.x;
    }
};

void program()
{
    int a, b;
    Point k, q;
    map<Point, bool> mp;
    cin >> a >> b;
    cin >> k.x >> k.y;
    cin >> q.x >> q.y;

    vector<int> dir = {1, -1};

    for (int d : dir)
    {
        mp[{k.x + (a * d), k.y + b}] = true;
        mp[{k.x + (a * d), k.y - b}] = true;
    }

    for (int d : dir)
    {
        mp[{k.x + (b * d), k.y + a}] = true;
        mp[{k.x + (b * d), k.y - a}] = true;
    }

    int ans = 0;

    for (int d : dir)
    {
        int qx = q.x + (a * d);
        int qy1 = q.y + b;
        int qy2 = q.y - b;

        if (mp.count({qx, qy1}) && mp[{qx, qy1}])
        {
            ans++;
            mp[{qx, qy1}] = false;
        }
        if (mp.count({qx, qy2}) && mp[{qx, qy2}])
        {
            mp[{qx, qy2}] = false;
            ans++;
        }
    }

    for (int d : dir)
    {
        int qx = q.x + (b * d);
        int qy1 = q.y + a;
        int qy2 = q.y - a;

        if (mp.count({qx, qy1}) && mp[{qx, qy1}])
        {
            ans++;
            mp[{qx, qy1}] = false;
        }

        if (mp.count({qx, qy2}) && mp[{qx, qy2}])
        {
            ans++;
            mp[{qx, qy2}] = false;
        }
    }

    cout << ans << endl;
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