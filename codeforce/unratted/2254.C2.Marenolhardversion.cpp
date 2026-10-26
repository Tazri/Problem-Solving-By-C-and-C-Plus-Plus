// link : https://codeforces.com/contest/2254/problem/C2
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

ll fcnt(string &a, string &b)
{
    int n = a.size();
    multiset<int> mt0;
    multiset<int> mt1;

    for (int i = 0; i < n; i++)
        if (b[i] == '0')
            mt0.insert(i);
        else
            mt1.insert(i);

    ll score = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            if (b[i] == '0')
                mt0.erase(i);
            else
                mt1.erase(i);
            continue;
        }

        if (b[i] == '0')
        {
            mt0.erase(i);
            int i0 = i;
            int i1 = *mt1.begin();
            mt1.erase(i1);
            score += (ll)abs(i0 - i1);
            swap(b[i0], b[i1]);
            mt0.insert(i1);
            continue;
        }
        mt1.erase(i);
        int i1 = i;
        int i0 = *mt0.begin();
        mt0.erase(i0);
        score += (ll)(abs(i0 - i1));
        swap(b[i0], b[i1]);
        mt1.insert(i0);
    }

    return score;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    if (!possible(s, t))
    {
        cout << -1 << endl;
        return;
    }

    string a, b;
    for (int i = 0; i < n; i += 2)
    {
        a.push_back(s[i]);
        b.push_back(t[i]);
    }

    ll cnt1 = fcnt(a, b);

    a = "";
    b = "";
    for (int i = 1; i < n; i += 2)
    {
        a.push_back(s[i]);
        b.push_back(t[i]);
    }

    ll cnt2 = fcnt(a, b);

    cout << cnt1 + cnt2 << endl;
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