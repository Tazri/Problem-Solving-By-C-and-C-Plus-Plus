// link : https://codeforces.com/problemset/problem/300/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> neg;
    vector<int> pos;
    vector<int> zero;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (vi == 0)
            zero.push_back(vi);
        else if (vi < 0)
            neg.push_back(vi);
        else
            pos.push_back(vi);
    }

    vector<int> st1;
    vector<int> st2;
    vector<int> st3;

    int ni = 0;
    int pi = 0;
    int zi = 0;

    if (pos.size() <= 0)
    {
        st2.push_back(neg[0]);
        st2.push_back(neg[1]);
        st1.push_back(neg[2]);
        ni = 3;
    }
    else
    {
        st2.push_back(pos[0]);
        st1.push_back(neg[0]);
        pi = 1;
        ni = 1;
    }

    for (int i = ni; i < neg.size(); i++)
        st3.push_back(neg[i]);

    for (int i = pi; i < pos.size(); i++)
        st3.push_back(pos[i]);

    for (int i = 0; i < zero.size(); i++)
        st3.push_back(0);

    cout << st1.size() << " ";
    for (int i = 0; i < st1.size(); i++)
        cout << st1[i] << " \n"[st1.size() - 1 == i];

    cout << st2.size() << " ";
    for (int i = 0; i < st2.size(); i++)
        cout << st2[i] << " \n"[st2.size() - 1 == i];

    cout << st3.size() << " ";
    for (int i = 0; i < st3.size(); i++)
        cout << st3[i] << " \n"[st3.size() - 1 == i];
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