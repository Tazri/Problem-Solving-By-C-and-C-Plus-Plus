// link : https://codeforces.com/problemset/problem/2000/C
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

void checkMatch(vector<int> &temp, int n)
{
    string s;
    cin >> s;

    if (s.size() != n)
    {
        cout << "NO" << endl;
        return;
    }

    unordered_map<int, int> chmp;
    unordered_map<int, int> intmp;

    for (int i = 0; i < n; i++)
    {
        int ti = temp[i];
        int ci = (int)s[i];

        if (!chmp.count(ci) && !intmp.count(ti))
        {
            chmp[ci] = ti;
            intmp[ti] = ci;
            continue;
        }

        if (chmp.count(ci) && intmp.count(ti))
        {
            if (chmp[ci] != ti || intmp[ti] != ci)
            {
                cout << "NO" << endl;
                return;
            }
            continue;
        }

        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

void program()
{
    int n;
    cin >> n;
    vector<int> temp(n);

    for (int i = 0; i < n; i++)
        cin >> temp[i];

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
        checkMatch(temp, n);
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