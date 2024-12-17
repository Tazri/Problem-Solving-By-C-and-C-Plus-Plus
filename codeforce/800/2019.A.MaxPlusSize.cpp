// link : https://codeforces.com/problemset/problem/2019/A

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

    if (n == 1)
    {
        int ai;
        cin >> ai;
        cout << ai + 1 << endl;
        return;
    }
    else if (n == 2)
    {
        int a1, a2;
        cin >> a1 >> a2;
        int maxa = max(a1, a2);
        cout << maxa + 1 << endl;
        return;
    }

    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int maxEven = arr[2];
    int maxOdd = arr[1];
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            maxOdd = max(maxOdd, arr[i]);
        }
        else
        {
            maxEven = max(maxEven, arr[i]);
        }
    }

    int totalEven = n / 2;
    int totalOdd = ceil((n * 1.0) / 2);

    cout << max(totalEven + maxEven, totalOdd + maxOdd) << endl;
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