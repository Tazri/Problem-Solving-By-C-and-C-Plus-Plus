// link : https://codeforces.com/problemset/problem/1703/D
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

void program()
{
    int n;
    cin >> n;
    vector<string> strs(n);
    map<string, bool> mp;
    vector<int> ans(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
        mp[strs[i]] = true;
    }

    for (int i = 0; i < n; i++)
    {
        string si = strs[i];
        int l = 1;
        int r = si.size() - 1;

        for (int j = 0; j < si.size(); j++)
        {
            string sj = si.substr(0, l);
            string sk = si.substr(j + 1, r);

            if (mp.count(sj) && mp.count(sk))
            {
                ans[i] = 1;
                break;
            }
            l++;
            r--;
        }
    }

    for (int ai : ans)
        cout << ai;
    cout << endl;
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