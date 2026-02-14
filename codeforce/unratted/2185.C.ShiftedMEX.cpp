// link: https://codeforces.com/contest/2185/problem/C

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    sort(v.begin(), v.end());

    int mx = 1;
    int len = 1;
    for (int i = 1; i < n; i++)
    {
        int d = v[i] - v[i - 1];
        if (d == 0)
        {
            continue;
        }
        else if (v[i] - v[i - 1] == 1)
        {
            len++;
        }
        else
        {
            mx = max(mx, len);
            len = 1;
        }
    }

    mx = max(len, mx);

    cout << mx << endl;
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