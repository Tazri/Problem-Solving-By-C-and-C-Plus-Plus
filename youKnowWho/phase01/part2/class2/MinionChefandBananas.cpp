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

bool can(vector<int> &v, int h, int k)
{
    int hours = 0;
    for (int &vi : v)
        hours += (vi + k - 1) / k;

    return hours <= h;
}

void program()
{
    int n, h;
    cin >> n >> h;
    int mx = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (i == 0)
            mx = v[i];
        mx = max(v[i], mx);
    }

    int l = 1;
    int r = mx;
    int ans = r;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (can(v, h, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}