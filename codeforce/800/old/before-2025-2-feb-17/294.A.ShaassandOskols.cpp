// link: https://codeforces.com/problemset/problem/294/A
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
    vector<int> v(n + 2);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    int m;
    cin >> m;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        int birds = v[x];
        v[x] = 0;
        int left = y - 1;
        int right = birds - y;
        v[x - 1] += left;
        v[x + 1] += right;
    }

    for (int i = 1; i <= n; i++)
        cout << v[i] << "\n";
}

int32_t main()
{
    optimize();
    program();
    return 0;
}