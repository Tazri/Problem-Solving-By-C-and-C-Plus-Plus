// link : https://codeforces.com/problemset/problem/1790/D
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
    vector<int> v(n);

    vector<int> unq;
    unq.reserve(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (mp.count(v[i]))
            mp[v[i]]++;
        else
        {
            unq.push_back(v[i]);
            mp[v[i]]++;
        }
    }

    sort(unq.begin(), unq.end());

    int ans = 0;
    for (int i = 1; i < unq.size(); i++)
    {
        if (unq[i] - unq[i - 1] == 1)
        {
            int prev = mp[unq[i - 1]];
            int curr = mp[unq[i]];

            if (prev > curr)
            {

                int d = prev - curr;
                ans += d;
            }
        }
        else
        {
            ans += mp[unq[i - 1]];
        }
    }

    ans += mp[unq.back()];

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