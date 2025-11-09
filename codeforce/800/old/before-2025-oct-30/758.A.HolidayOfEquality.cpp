// link : https://codeforces.com/problemset/problem/758/A
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
    int mx = 0;
    for (int &vi : v)
    {
        cin >> vi;
        mx = max(mx, vi);
    }

    int ans = 0;
    for (int &vi : v)
    {
        ans += mx - vi;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}