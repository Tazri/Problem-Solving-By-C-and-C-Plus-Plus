// link : https://codeforces.com/problemset/problem/1772/C
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
    int k, n;
    cin >> k >> n;
    vector<int> ans(k + 1);
    ans[0] = 1;
    int si = -1;
    for (int i = 1; i <= k; i++)
    {
        int ai = ans[i - 1] + (i - 1);

        int left = k - i;
        int can = n - ai;

        if (can >= left)
        {
            ans[i] = ai;
        }
        else
        {
            si = i;
            break;
        }
    }

    if (si > 0)
        for (int i = si; i <= k; i++)
            ans[i] = ans[i - 1] + 1;

    cout << ans[1];
    for (int i = 2; i <= k; i++)
        cout << " " << ans[i];
    cout << endl;
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