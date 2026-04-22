// link : https://codeforces.com/contest/2220/problem/D2
#include <bits/stdc++.h>

using namespace std;

int query(vector<int> &v)
{
    cout << "? ";
    cout << v.size();

    for (int vi : v)
        cout << " " << vi;
    cout << endl;

    int ans;
    cin >> ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    int cn;
    cin >> cn;
    int n = 2 * cn + 1;

    int left = 1;
    int right = n;
    int rl;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        vector<int> v(mid);

        for (int i = 0; i < mid; i++)
            v[i] = i + 1;

        int total = mid - query(v);

        if (total & 1)
        {
            rl = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    // cout << rl << endl;

    left = 1;
    right = rl - 1;
    int ll = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        vector<int> v;
        for (int i = mid; i <= rl; i++)
            v.push_back(i);

        int distict = v.size() - query(v);

        if (distict & 1)
        {
            ll = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    int ml = -1;

    left = ll + 1;
    right = rl - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        vector<int> v;
        v.push_back(ll);
        v.push_back(rl);

        for (int i = ll + 1; i <= mid; i++)
            v.push_back(i);

        int distict = v.size() - query(v);

        if (distict & 1)
        {
            ml = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << "! " << ll << " " << ml << " " << rl << endl;
}

int32_t main()
{

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}