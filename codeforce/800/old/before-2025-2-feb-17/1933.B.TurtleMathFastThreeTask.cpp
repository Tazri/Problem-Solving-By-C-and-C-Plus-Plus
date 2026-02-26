// link : https://codeforces.com/problemset/problem/1933/B
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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        v[i] %= 3;
        sum += v[i];
        sum %= 3;
    }

    if (!sum)
    {
        cout << 0 << endl;
        return;
    }

    if (sum == 2)
    {
        cout << 1 << endl;
        return;
    }

    for (int &vi : v)
    {
        if (sum == vi)
        {
            cout << 1 << endl;
            return;
        }
    }

    cout << 2 << endl;
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