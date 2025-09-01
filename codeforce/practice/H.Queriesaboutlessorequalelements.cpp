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

int ub(vector<int> &arr, int x)
{
    return upper_bound(arr.begin(), arr.end(), x) - arr.begin();
}

void program()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> ans;
    ans.reserve(m);

    for (int &ai : a)
        cin >> ai;

    for (int &bi : b)
        cin >> bi;

    sort(a.begin(), a.end());

    for (int bi : b)
    {
        int l = 0;
        int r = n - 1;
        ans.push_back(ub(a, bi));
    }

    for (int i = 0; i < m; i++)
        cout << ans[i] << " \n"[i == m - 1];
}

int main()
{
    optimize();
    program();
    return 0;
}