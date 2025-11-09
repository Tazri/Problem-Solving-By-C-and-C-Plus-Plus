// link : https://codeforces.com/problemset/problem/1901/A
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
    int n, x;
    cin >> n >> x;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];
    v[0] = 0;

    int mx = -1;

    for (int i = 1; i <= n; i++)
    {
        int d = v[i] - v[i - 1];

        mx = max(mx, d);
    }

    int ld = (x - v.back()) * 2;
    mx = max(ld, mx);

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