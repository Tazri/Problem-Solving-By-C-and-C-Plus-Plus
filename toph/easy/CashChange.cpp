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
    vector<int> v = {1, 5, 10, 50, 100, 500};
    reverse(v.begin(), v.end());

    vector<int> ans;
    int n;

    cin >> n;

    for (int vi : v)
    {
        int t = n / vi;
        n = n % vi;

        for (int i = 0; i < t; i++)
            ans.push_back(vi);
    }

    reverse(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i == ans.size() - 1];
}

int32_t main()
{
    optimize();
    program();
    return 0;
}