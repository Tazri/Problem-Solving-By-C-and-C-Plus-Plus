// link : https://codeforces.com/problemset/problem/2151/A
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
    cin >> n >> m;

    int cnt = 0;
    int first = -1;
    int mx = 0;

    for (int i = 0; i < m; i++)
    {
        int vi;
        cin >> vi;

        if (vi == 1)
            cnt++;

        if (i == 0)
            first = vi;
        mx = max(mx, vi);
    }

    if (cnt > 1 || (cnt == 1 && first != 1))
    {
        cout << 1 << endl;
        return;
    }

    cout << n - mx + 1 << endl;
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