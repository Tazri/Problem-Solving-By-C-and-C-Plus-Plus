// link : https://codeforces.com/problemset/problem/2031/A
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

int main()
{
    optimize();
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int l = 1;
        int prev, curr;
        int maxLong = 1;
        cin >> prev;

        for (int i = 0; i < n - 1; i++)
        {
            cin >> curr;

            if (curr == prev)
            {
                l++;
                maxLong = max(l, maxLong);
            }
            else
            {
                l = 1;
            }
            prev = curr;
        }

        int ans = n - maxLong;
        cout << ans << endl;
    }
    return 0;
}