// link : https://codeforces.com/problemset/problem/1696/B
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

    int si = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] > 0 && si == -1)
        {
            si = i;
        }
    }

    int ei = -1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > 0)
        {
            ei = i;
            break;
        }
    }

    if (ei == -1 || si == -1)
    {
        cout << 0 << endl;
        return;
    }

    bool isZeroFound = false;
    for (int i = si; i <= ei; i++)
    {
        if (arr[i] <= 0)
        {
            isZeroFound = true;
            break;
        }
    }

    if (isZeroFound)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
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