// link : https://codeforces.com/problemset/problem/2094/D
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

string getAlter(string s)
{
    string alter = "";

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
            alter += s[i - 1];
    }

    alter += s[s.size() - 1];

    return alter;
}

void program()
{
    string s, p;
    string sAlter, pAlter;

    cin >> s >> p;

    if (s[0] != p[0])
    {
        cout << "NO" << endl;
        return;
    }

    if (p.size() < s.size())
    {
        cout << "NO" << endl;
        return;
    }

    sAlter = getAlter(s);
    pAlter = getAlter(p);

    if (sAlter != pAlter)
    {
        cout << "NO" << endl;
        return;
    }

    vector<int> sa;
    sa.reserve(sAlter.size());
    vector<int> pa;
    pa.reserve(pAlter.size());

    int cnt = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
        }
        else
        {
            sa.push_back(cnt);
            cnt = 1;
        }
    }

    sa.push_back(cnt);

    cnt = 1;
    for (int i = 1; i < p.size(); i++)
    {
        if (p[i] == p[i - 1])
        {
            cnt++;
        }
        else
        {
            pa.push_back(cnt);
            cnt = 1;
        }
    }
    pa.push_back(cnt);

    for (int i = 0; i < pa.size(); i++)
    {
        int did = sa[i];
        int hear = pa[i];

        if (hear < did)
        {
            cout << "NO" << endl;
            return;
        }

        if (hear == did)
            continue;

        int extra = hear - did;

        if (extra > did)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    return;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}