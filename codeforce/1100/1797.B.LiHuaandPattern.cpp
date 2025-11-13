// link : https://codeforces.com/problemset/problem/1797/B
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
    vector<vector<int>> g(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> g[i][j];

    int cnt = 0;

    for (int i = 0, ri = n - 1; i < n; i++, ri--)
        for (int j = 0, rj = n - 1; j < n; j++, rj--)
            if (g[i][j] != g[ri][rj])
                cnt++;

    cnt /= 2;

    if (cnt > k)
    {
        cout << "NO" << endl;
        return;
    }
    int left = k - cnt;

    if (left % 2 == 0 || n & 1)
        cout << "YES" << endl;
    else
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