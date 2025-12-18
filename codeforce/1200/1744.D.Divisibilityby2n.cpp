// link : https://codeforces.com/problemset/problem/1744/D
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
    vector<int> mp(n + 1, 0);
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        int vi;
        cin >> vi;

        while (vi % 2 == 0)
        {
            mp[i]++;
            vi /= 2;
        }
        cnt += mp[i];
    }

    if (cnt >= n)
    {
        cout << 0 << endl;
        return;
    }

    int apply = 0;
    vector<int> extra;
    extra.reserve(n);

    for (int i = 2; i <= n; i += 2)
    {
        int ci = 0;
        int di = i;
        while (di % 2 == 0)
        {
            ci++;
            di /= 2;
        }
        if (ci)
            extra.push_back(ci);
    }

    sort(extra.rbegin(), extra.rend());

    for (int ei : extra)
    {
        apply++;
        cnt += ei;

        if (cnt >= n)
        {
            cout << apply << endl;
            return;
        }
    }
    cout << -1 << endl;
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