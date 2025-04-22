// link : https://codeforces.com/problemset/problem/2092/A
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
    int mn;
    int mx;
    cin >> mn;
    mx = mn;

    for (int i = 1; i < n; i++)
    {
        int ai;
        cin >> ai;

        mn = min(mn, ai);
        mx = max(mx, ai);
    }

    cout << mx - mn << endl;
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