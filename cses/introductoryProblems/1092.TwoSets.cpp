// link : https://cses.fi/problemset/task/1092/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void handleOdd(int n)
{
    cout << "YES" << endl;
    vector<int> st1;
    vector<int> st2;

    int l = 2;
    int r = n;
    bool flag = true;
    while (l < r)
    {
        if (l + 1 == r)
        {
            st1.push_back(l);
            st1.push_back(1);
            st2.push_back(r);
        }
        else
        {
            if (flag)
            {
                st1.push_back(l);
                st1.push_back(r);
            }
            else
            {
                st2.push_back(l);
                st2.push_back(r);
            }
        }

        l++;
        r--;
        flag = !flag;
    }

    cout << st1.size() << endl;
    for (int i = 0; i < st1.size(); i++)
        cout << st1[i] << " \n"[i == st1.size() - 1];

    cout << st2.size() << endl;
    for (int i = 0; i < st2.size(); i++)
        cout << st2[i] << " \n"[i == st2.size() - 1];
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    if (n & 1)
    {
        int half = (n + 1) / 2;

        if (half & 1)
        {
            cout << "NO" << endl;
            return;
        }

        handleOdd(n);

        return;
    }

    int half = n / 2;

    if (half & 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    vector<int> st1;
    vector<int> st2;
    int l = 1;
    int r = n;
    bool flag = true;
    while (l < r)
    {
        if (flag)
        {
            st1.push_back(l);
            st1.push_back(r);
        }
        else
        {
            st2.push_back(l);
            st2.push_back(r);
        }

        l++;
        r--;
        flag = !flag;
    }

    cout << st1.size() << endl;
    for (int i = 0; i < st1.size(); i++)
        cout << st1[i] << " \n"[i == st1.size() - 1];

    cout << st2.size() << endl;
    for (int i = 0; i < st2.size(); i++)
        cout << st2[i] << " \n"[i == st2.size() - 1];
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}