// link : https://atcoder.jp/contests/abc125/tasks/abc125_c?lang=en
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
    vector<int> left(n);
    vector<int> right(n);

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        left[i] = ai;
        right[i] = ai;
    }

    for (int i = 1; i < n; i++)
        left[i] = gcd(left[i - 1], left[i]);

    for (int i = n - 1; i >= 0; i--)
        right[i] = gcd(right[i + 1], right[i]);

    int mx = max(right[1], left[n - 2]);

    for (int i = 1; i < n - 1; i++)
    {
        int g = gcd(right[i + 1], left[i - 1]);
        mx = max(g, mx);
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}