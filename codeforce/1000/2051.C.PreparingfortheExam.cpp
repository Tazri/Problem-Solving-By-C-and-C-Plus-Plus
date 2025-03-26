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

void test()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m);

    int miss = 0;

    for (int i = 0; i < m; i++)
        cin >> a[i];

    for (int i = 1; i <= k; i++)
    {
        int temp;
        cin >> temp;
        miss ^= temp;
    }

    for (int i = 1; i <= n; i++)
        miss ^= i;

    int r = n - 1;

    if (k < r)
    {
        for (int i = 0; i < m; i++)
            cout << "0";
        cout << endl;
        return;
    }

    if (k >= n)
    {
        for (int i = 0; i < m; i++)
            cout << "1";
        cout << endl;
        return;
    }

    for (int i : a)
    {
        if (i == miss)
            cout << "1";
        else
            cout << "0";
    }
    cout << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}