// link : https://codeforces.com/contest/2193/problem/B
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

    int l = -1;
    int r = -1;
    int s = n;
    for (int i = 0; i < n; i++, s--)
        if (v[i] != s)
        {
            l = i;
            break;
        }

    if (l == -1)
    {
        for (int i = 0; i < n; i++)
            cout << v[i] << " \n"[i == n - 1];
        return;
    }

    for (int i = 0; i < n; i++)
        if (v[i] == s)
        {
            r = i;
            break;
        }

    while (l <= r)
    {
        swap(v[l], v[r]);
        l++;
        r--;
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " \n"[i == n - 1];
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}