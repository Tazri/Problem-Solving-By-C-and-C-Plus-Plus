// link : https://codeforces.com/problemset/problem/1644/C
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

int funcSum(vector<int> &arr, int k)
{
    if (k == arr.size())
    {
        int sum = 0;
        for (int i = 0; i < k; i++)
            sum += arr[i];
        return sum;
    }

    if (k == 0)
        return 0;

    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += arr[i];

    int mx = sum;
    for (int i = k, f = 0; i < arr.size(); i++, f++)
    {
        sum -= arr[f];
        sum += arr[i];
        mx = max(mx, sum);
    }

    return mx;
}

int findMx(vector<int> &arr, int x, int k)
{
    int mx = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        int mn = min(k, i);
        int add = x * mn;
        mx = max(arr[i] + add, mx);
    }

    return mx;
}

void program()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    vector<int> mxSum(n + 1);
    vector<int> ans;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int k = 0; k <= n; k++)
    {
        int s = funcSum(arr, k);

        mxSum[k] = s;
    }

    int prevMax = findMx(mxSum, x, 0);
    for (int k = 0; k <= n; k++)
    {
        int add = x * k;
        int mx = findMx(mxSum, x, k);
        ans.push_back(max(prevMax, mx));
        prevMax = max(mx, prevMax);
    }

    for (int i = 0; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
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