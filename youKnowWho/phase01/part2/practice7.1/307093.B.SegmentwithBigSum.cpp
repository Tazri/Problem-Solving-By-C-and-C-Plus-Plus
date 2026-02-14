// link : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
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

void program()
{
    int n, s;
    cin >> n >> s;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sum = 0;
    int l = 0;
    int r = 0;
    int ans = -1;

    while (l < n)
    {
        while (r < n && sum + v[r] < s)
        {
            sum += v[r];
            r++;
        }

        if (r < n)
            sum += v[r];

        int len = r - l + 1;

        // cout << l << " , " << r << " -> " << len << " sum : " << sum << endl;
        if (sum >= s)
        {
            if (ans == -1)
                ans = len;
            ans = min(ans, len);
        }
        sum -= v[l];
        l++;
        if (r < n)
            sum -= v[r];
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}