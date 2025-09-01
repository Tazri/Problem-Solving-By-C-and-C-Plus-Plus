// link : https://codeforces.com/problemset/problem/600/B
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

int lb(vector<int> &arr, int x)
{
    int n = arr.size();

    if (arr.back() < x)
        return -1;

    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (x < arr[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }

    return l;
}

void program()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> ans;
    ans.reserve(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());

    for (int bi : b)
    {
        int l = lb(a, bi);

        if (l == -1)
            ans.push_back(a.size());
        else
            ans.push_back(l);
    }

    for (int i = 0; i < m; i++)
        cout << ans[i] << " \n"[i == n - 1];
}

int main()
{
    optimize();
    program();
    return 0;
}