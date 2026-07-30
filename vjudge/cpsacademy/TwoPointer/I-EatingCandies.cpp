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
    {
        cin >> vi;
    }

    int left = 0;
    int lc = 0;
    int rc = 0;
    int right = 0;
    int ans = 0;
    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        if (left == right)
        {
            ans = max(ans, lc + rc);
            left += v[l];
            l++;
            lc++;
            continue;
        }

        if (left < right)
        {
            left += v[l];
            lc++;
            l++;
        }
        else
        {
            right += v[r];
            rc++;
            r--;
        }
    }

    if (left == right)
    {
        ans = max(ans, lc + rc);
    }

    cout << ans << endl;
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