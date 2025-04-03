// link : https://codeforces.com/contest/1473/problem/B
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

string prefix(string a, int sz)
{
    if (a.size() < sz)
    {
        return a;
    }

    string pr(sz, 0);

    for (int i = 0; i < sz; i++)
    {
        pr[i] = a[i];
    }

    return pr;
}

string repeatString(string s, int t)
{
    string ns = "";

    for (int i = 0; i < t; i++)
        ns += s;
    return ns;
}

string getRepeatedPart(string s)
{
    vector<int> devs;
    int n = s.size();
    devs.push_back(1);

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int a = i;
            int b = n / i;

            devs.push_back(a);
            if (a != b)
                devs.push_back(b);
        }
    }

    devs.push_back(n);
    sort(devs.begin(), devs.end(), [](int a, int b)
         { return a < b; });

    for (int d : devs)
    {
        string pref = prefix(s, d);
        int t = n / d;
        string form = repeatString(pref, t);

        if (form == s)
        {
            return pref;
        }
    }

    return "";
}

void program()
{
    string a, b;
    cin >> a >> b;
    string mn, mx;

    if (a.size() < b.size())
    {
        mn = a;
        mx = b;
    }
    else
    {
        mn = b;
        mx = a;
    }

    string rep = getRepeatedPart(mn);
    int rn = rep.size();
    if (mx.size() % rn != 0)
    {
        cout << -1 << endl;
        return;
    }

    int t = mx.size() / rn;
    string form = repeatString(rep, t);

    if (form != mx)
    {
        cout << -1 << endl;
        return;
    }

    int l = lcm(mx.size(), mn.size());
    t = l / rn;

    string ans = repeatString(rep, t);
    cout << ans << endl;
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

/*
failed case :
1
abbabbabbabbabbabbabbabbabbabb
abbabbabbabbabbabbabbabbabbabbabbabb
*/