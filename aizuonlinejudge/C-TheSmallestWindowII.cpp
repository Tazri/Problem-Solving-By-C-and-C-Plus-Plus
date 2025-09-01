// linK: https://onlinejudge.u-aizu.ac.jp/problems/DSL_3_B
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
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    map<int, int> mp;

    int l = 0;
    int r = 0;
    bool found = false;
    int ans = n;

    while (r < n)
    {
        if (v[r] <= k)
        {
            mp[v[r]]++;
        }

        if (mp.size() < k)
        {
            r++;
            continue;
        }

        while (mp.size() == k)
        {
            found = true;

            if (v[l] <= k)
            {
                mp[v[l]]--;
            }

            if (mp[v[l]] == 0)
            {
                mp.erase(v[l]);
            }

            int len = r - l + 1;

            ans = min(ans, len);
            l++;
        }
        r++;
    }

    cout << (found ? ans : found) << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}