// link : https://codeforces.com/problemset/problem/1843/A
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

    for (int &vi : v)
        cin >> vi;

    sort(v.begin(), v.end());

    int ans = 0;

    for (int l = 0, r = n - 1; l <= r; ans += v[r] - v[l], l++, r--)
        ;

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    int n;
    cin >> n;
    while (n--)
        program();
    return 0;
}