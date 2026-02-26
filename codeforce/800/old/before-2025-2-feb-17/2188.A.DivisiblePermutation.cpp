// link : https://codeforces.com/contest/2188/problem/A
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
    vector<int> v(n + 1);

    v[n] = n;
    set<int> st;

    int flag = true;

    for (int i = n - 1; i >= 1; i--)
    {
        if (flag)
            v[i] = v[i + 1] - i;
        else
            v[i] = v[i + 1] + i;

        flag = !flag;
    }

    for (int i = 1; i <= n; i++)
        cout << v[i] << " \n"[i == n];
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