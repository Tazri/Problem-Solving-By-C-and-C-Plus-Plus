// link : https://codeforces.com/contest/1339/problem/B
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
        cin >> vi;

    sort(v.begin(), v.end());

    int l = 0;
    int r = n - 1;
    vector<int> ans;
    ans.reserve(n);
    while (l <= r)
    {
        if (l == r)
        {
            ans.push_back(v[l]);
            l++;
            r--;
            continue;
        }
        ans.push_back(v[l]);
        ans.push_back(v[r]);
        l++;
        r--;
    }

    reverse(ans.begin(), ans.end());

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
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