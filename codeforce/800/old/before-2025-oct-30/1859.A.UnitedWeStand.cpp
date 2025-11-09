// link : https://codeforces.com/problemset/problem/1859/A
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
    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    bool equal = true;
    int mn = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] != v[i])
            equal = false;

        mn = min(mn, v[i]);
    }

    if (equal)
    {
        cout << -1 << endl;
        return;
    }

    int cnt = 0;
    for (int &vi : v)
        if (mn == vi)
            cnt++;

    cout << cnt << " " << n - cnt << endl;

    for (int i = 1; i <= cnt; i++)
        cout << mn << " \n"[i == cnt];

    vector<int> b;
    b.reserve(n - cnt);

    for (int &vi : v)
        if (vi != mn)
            b.push_back(vi);

    for (int i = 0; i < b.size(); i++)
        cout << b[i] << " \n"[i == b.size() - 1];
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