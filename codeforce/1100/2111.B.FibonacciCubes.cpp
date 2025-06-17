// link : https://codeforces.com/problemset/problem/2111/B
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

vector<int> fib(10 + 1);

void cal()
{
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 2;

    for (int i = 3; i < fib.size(); i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

void program()
{
    int n, m;
    cin >> n >> m;
    vector<int> ans(m);
    int b1 = fib[n];
    int b2 = fib[n - 1];

    for (int i = 0; i < m; i++)
    {
        int w, h, l;
        cin >> w >> l >> h;
        int mn = min(w, min(l, h));
        int mx = max(w, max(l, h));

        if (mn < b1)
        {
            ans[i] = 0;
            continue;
        }

        int b1b2 = b1 + b2;

        if (mx < b1 + b2)
        {
            ans[i] = 0;
            continue;
        }

        ans[i] = 1;
    }

    for (int ai : ans)
        cout << ai;
    cout << endl;
}

int main()
{
    optimize();
    cal();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}