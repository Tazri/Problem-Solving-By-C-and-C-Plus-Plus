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
#define int ll
int n, k;
vector<int> v;

bool isPossible(int x)
{
    int sum = 0;
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > x)
            return false;

        if (sum + v[i] <= x)
            sum += v[i];
        else
        {
            cnt++;
            sum = v[i];
        }
    }

    return cnt <= k;
}

void program()
{
    cin >> n >> k;
    v = vector<int>(n);
    int mn = 0;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mx += v[i];

        if (i == 0)
            mn = v[i];

        mn = min(v[i], mn);
    }

    int l = mn;
    int r = mx;
    int ans = mx;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (isPossible(mid))
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
    program();
    return 0;
}