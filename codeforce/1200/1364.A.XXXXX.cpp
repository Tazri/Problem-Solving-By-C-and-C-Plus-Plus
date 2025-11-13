// link : https://codeforces.com/problemset/problem/1364/A
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
    vector<int> v(n);

    int sum = 0;
    for (int &vi : v)
    {
        cin >> vi;
        sum += vi;
    }

    int r = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % x)
        {
            r = i;
            break;
        }
    }

    if (r == -1)
    {
        cout << -1 << endl;
        return;
    }

    if (sum % x)
    {
        cout << n << endl;
        return;
    }

    int len = (n - 1) - r;
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
        if (v[i] % x)
        {
            r = i;
            break;
        }

    len = max(len, (n - 1) - r);

    cout << len << endl;
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