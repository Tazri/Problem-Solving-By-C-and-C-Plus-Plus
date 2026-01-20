// link : https://codeforces.com/contest/1922/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define int ll

int f3(int n)
{
    if (n < 3)
        return 0;

    return (n * (n - 1) * (n - 2)) / (1 * 2 * 3);
}

int f2(int n)
{
    if (n < 2)
        return 0;

    return (n * (n - 1)) / (1 * 2);
}

void program()
{
    int n;
    cin >> n;
    vector<int> mp(n + 1, 0);

    vector<int> v;
    v.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (mp[vi] == 0)
        {
            v.push_back(vi);
        }
        mp[vi]++;
    }

    sort(v.begin(), v.end());

    vector<int> freq;
    freq.reserve(n);

    for (int vi : v)
        freq.push_back(mp[vi]);

    vector<int> chooseTwo(freq.size() + 1, 0);

    for (int i = 0; i < freq.size(); i++)
        chooseTwo[i] = f2(freq[i]);

    for (int i = chooseTwo.size() - 2; i >= 0; i--)
    {
        chooseTwo[i] = chooseTwo[i] + chooseTwo[i + 1];
    }

    int ans = 0;

    for (int i = 0; i < freq.size(); i++)
    {
        ans += f3(freq[i]);
        ans += (chooseTwo[i + 1] * freq[i]);
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}