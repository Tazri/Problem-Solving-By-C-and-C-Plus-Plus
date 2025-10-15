// link : https://codeforces.com/problemset/problem/2123/B
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
    int n, j, k;
    cin >> n >> j >> k;

    int mx;
    j--;
    int arrj;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (i == 0)
            mx = ai;
        else
            mx = max(mx, ai);

        if (i == j)
            arrj = ai;
    }

    if (mx == arrj)
        cout << "YES" << endl;
    else if (k > 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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