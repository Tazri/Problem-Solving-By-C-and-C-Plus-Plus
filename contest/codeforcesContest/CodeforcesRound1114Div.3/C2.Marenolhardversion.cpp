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

bool possible(string &a, string &b)
{
    int n = a.size();
    if (!characterEqual(a, b))
    {
        return false;
    }

    string aid = detect(a);
    string bid = detect(b);

    if (aid == bid)
        return true;
    else
        return false;
}
void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    string a, b;

    cin >> a >> b;

    if (!possible(a, b))
    {
        cout << -1 << endl;
        return;
    }
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