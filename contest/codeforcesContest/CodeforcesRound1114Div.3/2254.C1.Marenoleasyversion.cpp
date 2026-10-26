// link : https://codeforces.com/contest/2254/problem/C1
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool characterEqual(string &a, string &b)
{
    int aone = 0;
    int azero = 0;
    int bone = 0;
    int bzero = 0;
    for (char ch : a)
        if (ch == '0')
            azero++;
        else
            aone++;

    for (char ch : b)
        if (ch == '0')
            bzero++;
        else
            bone++;

    return (aone == bone && azero == bzero);
}

string detect(string a)
{
    string stk;

    for (char ch : a)
    {
        if (stk.empty())
        {
            stk.push_back(ch);
            continue;
        }
        if (stk.back() == ch)
            stk.pop_back();
        else
            stk.push_back(ch);
    }
    return stk;
}

bool isAlternate(string &a)
{
    for (int i = 1; i < a.size(); i++)
        if (a[i] == a[i - 1])
            return false;
    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    string a, b;

    cin >> a >> b;

    if (!characterEqual(a, b))
    {
        cout << "NO" << endl;
        return;
    }

    string aid = detect(a);
    string bid = detect(b);

    if (aid == bid)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}