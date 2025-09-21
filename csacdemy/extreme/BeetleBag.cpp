// link : https://csacademy.com/ieeextreme-practice/task/ed8629419f140a5a2c923b049aba1224/
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

int cap, n;
vector<pair<int, int>> v;
map<pair<int, int>, int> mp;

int solve(int i, int take)
{
    if (i >= n)
    {
        return 0;
    }

    if (mp.count({i, take}))
    {
        return mp[{i, take}];
    }

    int left = cap - take;
    int m1 = 0;
    int m2 = 0;
    if (left >= v[i].first)
    {
        m1 += v[i].second;
        m1 += solve(i + 1, take + v[i].first);
    }

    m2 = solve(i + 1, take);

    int mx = max(m1, m2);

    mp[{i, take}] = mx;

    return mx;
}

void program()
{
    mp.clear();
    cin >> cap >> n;

    v = vector<pair<int, int>>(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    int mx = solve(0, 0);
    cout << mx << endl;
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