// link: https://codeforces.com/problemset/problem/1372/B
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
    vector<int> pr;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        pr.push_back(i);
        int d = n / i;
        if (d != i)
            pr.push_back(d);
    }

    if (pr.size() == 2)
    {
        cout << 1 << " " << n - 1 << endl;
        return;
    }

    int mx = 1;
    for (int pi : pr)
    {
        if (pi == n)
            continue;
        mx = max(pi, mx);
    }

    cout << mx << " " << n - mx << endl;
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