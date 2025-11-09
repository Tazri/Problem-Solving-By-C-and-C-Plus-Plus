// link : https://codeforces.com/problemset/problem/489/B
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
    int n, m;
    cin >> n;
    vector<int> b(n);
    for (int &bi : b)
        cin >> bi;

    cin >> m;
    vector<int> g(m);
    for (int &gi : g)
        cin >> gi;

    sort(b.begin(), b.end());
    sort(g.begin(), g.end());

    int cnt = 0;
    int bi = 0;
    int gi = 0;

    while (bi < n && gi < m)
    {
        int d = abs(b[bi] - g[gi]);
        if (d <= 1)
        {
            cnt++;
            bi++;
            gi++;
            continue;
        }

        if (b[bi] < g[gi])
            bi++;
        else
            gi++;
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}