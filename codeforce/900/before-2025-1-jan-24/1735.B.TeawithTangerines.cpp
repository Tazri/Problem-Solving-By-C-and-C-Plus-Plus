// link : https://codeforces.com/problemset/problem/1735/B
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

void test()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    cin >> arr[0];
    int mn = arr[0];

    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        mn = min(mn, arr[i]);
    }

    int twice = (mn * 2) - 1;
    int ans = 0;

    for (int num : arr)
    {
        if (num > twice)
        {
            int add = num / twice;

            ans += add;
            if (num % twice == 0)
            {
                ans--;
            }
        }
    }

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