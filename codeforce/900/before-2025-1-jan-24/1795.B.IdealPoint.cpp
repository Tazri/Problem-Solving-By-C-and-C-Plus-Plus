// link : https://codeforces.com/problemset/problem/1795/B
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
    int n, k;
    cin >> n >> k;
    int left = 0;
    int right = 0;
    int mid = 0;
    bool isSameFound = false;
    int ls = 0, rs = 0;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;

        if (k > l && k < r)
        {
            left++;
            right++;
            mid++;
        }
        else if (k == l && k == r)
        {
            isSameFound = true;
        }
        else if (k == l)
        {
            mid++;
            right++;
            rs++;
        }
        else if (k == r)
        {
            mid++;
            left++;
            ls++;
        }
    }

    if (isSameFound)
    {
        cout << "YES" << endl;
        return;
    }

    if (mid <= 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (mid > left && mid > right)
    {
        cout << "YES" << endl;
        return;
    }

    // try to mid top
    // cout << "mid : " << mid << endl;
    // cout << "left : " << left << endl;
    // cout << "left segment : " << ls << endl;
    // cout << "right : " << right << endl;
    // cout << "right segment : " << rs << endl;

    if (mid > left)
    {
        mid -= rs;
        right -= rs;

        if (mid > right && mid > left && mid > 0)
        {
            cout << "YES" << endl;
            return;
        }
        mid += rs;
        right += rs;
    }

    if (mid > right)
    {
        mid -= ls;
        left -= ls;

        if (mid > right && mid > left && mid > 0)
        {
            cout << "YES" << endl;
            return;
        }
        mid += ls;
        left += ls;
    }

    cout << "NO" << endl;
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
/*
-> no
10 2
2 7
7 9
4 8
6 8
6 10
1 5
7 9
2 10
1 6
6 7
*/