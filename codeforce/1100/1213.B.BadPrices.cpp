// link : https://codeforces.com/problemset/problem/1213/B
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
    vector<int> prices(n);
    vector<int> mn(n);

    for (int i = 0; i < n; i++)
        cin >> prices[i];

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    mn[n - 1] = prices[n - 1];

    for (int i = n - 2; i >= 0; i--)
        mn[i] = min(prices[i], mn[i + 1]);

    int days = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (prices[i] > mn[i + 1])
            days++;
    }

    cout << days << endl;
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