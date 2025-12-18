// link : https://codeforces.com/problemset/problem/961/B
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    vector<int> d(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
    {
        int isAwake;
        cin >> isAwake;

        if (isAwake)
            d[i] = v[i];
    }

    for (int i = 2; i <= n; i++)
    {
        v[i] += v[i - 1];
        d[i] += d[i - 1];
    }

    int sum = d.back();
    int mx = sum;
    for (int l = 1, r = k; r <= n; r++, l++)
    {
        int rm = d[r] - d[l - 1];
        int add = v[r] - v[l - 1];
        sum -= rm;
        sum += add;

        mx = max(mx, sum);
        sum -= add;
        sum += rm;
    }

    cout << mx << endl;
}

int main()
{
    optimize();

    program();
    return 0;
}