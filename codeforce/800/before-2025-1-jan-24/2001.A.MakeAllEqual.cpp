// link : https://codeforces.com/contest/2001/problem/A
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

void test()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        arr[ai]++;
    }

    int mx = arr[1];
    for (int i = 0; i <= n; i++)
    {
        mx = max(mx, arr[i]);
    }

    int ans = n - mx;
    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}