// link : https://codeforces.com/problemset/problem/1743/B
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
    vector<int> ans;
    ans.reserve(n);
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        v[i] = i + 1;

    int li = 0;
    int ri = n - 1;
    bool isFirst = true;
    while (li <= ri)
    {
        if (isFirst)
            ans.push_back(v[li++]);
        else
            ans.push_back(v[ri--]);

        isFirst = !isFirst;
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
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