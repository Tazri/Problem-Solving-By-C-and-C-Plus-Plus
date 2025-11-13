// link : https://codeforces.com/contest/1692/problem/B
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

void program()
{
    int n;
    cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        mp[ai]++;
    }

    int odd = 0;
    int even = 0;
    for (auto p : mp)
    {
        int cnt = p.second;
        if (cnt & 1)
            odd++;
        else
            even++;
    }

    if (even & 1)
        even--;

    cout << even + odd << endl;
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