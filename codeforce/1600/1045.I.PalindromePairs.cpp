// link : https://codeforces.com/problemset/problem/1045/I
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

int sz = (int)'z' - (int)'a' + 1;

ll nsum(int k)
{
    ll n = (ll)k;
    return (n * (n + 1)) / 2;
}

string filter(string &a)
{
    vector<bool> freq(sz, false);

    for (char ch : a)
    {
        int ci = (int)ch - (int)'a';
        freq[ci] = !freq[ci];
    }

    string s = "";

    for (int i = 0; i < sz; i++)
    {
        char ch = (char)((int)'a' + i);

        if (freq[i])
            s.push_back(ch);
        // cout << ch << endl;
    }

    return s;
}

void program()
{
    int n;
    cin >> n;
    vector<string> v;
    v.reserve(n);
    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        string fs = filter(s);

        if (mp.count(fs))
            mp[fs]++;
        else
        {
            v.push_back(fs);
            mp[fs]++;
        }
    }

    sort(v.begin(), v.end());

    ll ans = 0;

    // for (string vi : v)
    //     cout << vi << endl;

    for (string &vi : v)
    {
        // cout << "vi : " << vi << endl;
        ans += (ll)nsum(mp[vi] - 1);

        vector<string> list;

        string s;
        for (int i = 0; i < vi.size(); i++)
        {
            string right;
            for (int j = i + 1; j < vi.size(); j++)
                right.push_back(vi[j]);
            list.push_back(s + right);
            s.push_back(vi[i]);
        }

        // cout << vi << endl;
        for (string &li : list)
        {
            // cout << "li " << li << endl;
            ans += (ll)(mp[li] * mp[vi]);
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}