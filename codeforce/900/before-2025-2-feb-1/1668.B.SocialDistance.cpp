// link : https://codeforces.com/problemset/problem/1668/B
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
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n > m)
    {
        cout << "NO" << endl;
        return;
    }

    // sort it
    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a > b; });

    int li = m - arr[0] + 1;
    int ci = 1 + arr[0] + 1;

    if (li < 1 || ci >= li)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if (ci < li)
        {
            ci = ci + arr[i] + 1;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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