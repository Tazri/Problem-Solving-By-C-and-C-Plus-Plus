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
    vector<int> mp((2 * n) + 1, 0);
    vector<int> v;
    v.reserve(2 * n);

    for (int i = 0; i < 2 * n; i++)
    {
        int vi;
        cin >> vi;

        if (mp[vi] == 0)
        {
            mp[vi]++;
            v.push_back(vi);
        }
        else
            mp[vi]++;
    }

    sort(v.begin(), v.end(), [&mp](int a, int b)
         { return mp[a] < mp[b]; });

    int left = n;
    int right = n;
    vector<int> evens;
    evens.reserve(n);
    int odd = 0;

    for (int vi : v)
        if (mp[vi] & 1)
            odd++;
        else
            evens.push_back(mp[vi]);

    int ans = odd;

    for (int t : evens)
    {
        int r1 = 1;
        int r2 = t - 1;

        if (t == left + right)
        {
            if (left & 1)
                ans++;
            if (right & 1)
                ans++;
            left -= left;
            right -= right;
            continue;
        }

        if (r2 <= right)
        {
            right -= r2;
            left -= r1;
        }
        else
        {
            left -= r2;
            right -= r1;
        }

        ans += 2;
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