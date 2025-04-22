// link : https://codeforces.com/problemset/problem/1742/D
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
    vector<int> index(1001, 0);

    for (int i = 1; i <= n; i++)
    {
        int ai;
        cin >> ai;
        index[ai] = i;
    }

    int mx = 0;
    for (int i = 1000; i >= 1; i--)
    {
        if (!index[i])
            continue;

        for (int j = 1000; j >= 1; j--)
        {
            if (!index[j])
                continue;
            if (gcd(i, j) == 1)
            {
                mx = max(index[i] + index[j], mx);
            }
        }
    }

    if (mx)
        cout << mx << endl;
    else
        cout << -1 << endl;
    return;
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