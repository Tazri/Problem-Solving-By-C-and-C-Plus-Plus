// link : https://atcoder.jp/contests/abc103/tasks/abc103_d
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

struct Island
{
    int left, right;
};

void program()
{
    int n, m;
    cin >> n >> m;

    vector<Island> v(m);

    for (int i = 0; i < m; i++)
    {
        cin >> v[i].left;
        cin >> v[i].right;
    }

    sort(v.begin(), v.end(), [](Island a, Island b)
         { return a.right < b.right; });

    int ans = 0;
    Island prev;

    for (int i = 0; i < m; i++)
    {
        if (i == 0)
        {
            ans++;
            prev = v[i];
        }

        if (v[i].left < prev.right)
            continue;
        ans++;
        prev = v[i];
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}