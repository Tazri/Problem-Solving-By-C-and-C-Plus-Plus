// link : https://codeforces.com/problemset/problem/2162/D
#include <bits/stdc++.h>

using namespace std;

#define A 1
#define B 2

int query(int type, int l, int r)
{
    cout << type << " " << l << " " << r << endl;
    int ans;
    cin >> ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    int l = 1;
    int r = n;

    int left = 1;
    int right = n;
    int ans = l;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        int asum = query(A, 1, mid);
        int bsum = query(B, 1, mid);

        if (bsum > asum)
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    int ansL = ans;
    int aSum = query(A, ansL, n);
    int bSum = query(B, ansL, n);
    int d = bSum - aSum;
    int ansR = ansL + d - 1;

    cout << "! " << ansL << " " << ansR << endl;
}

int32_t main()
{

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}