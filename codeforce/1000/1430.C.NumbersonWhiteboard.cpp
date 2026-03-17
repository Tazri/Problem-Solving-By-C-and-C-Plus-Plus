// link : https://codeforces.com/contest/1430/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    multiset<int> mt;

    for (int i = 1; i <= n; i++)
        mt.insert(i);

    vector<int> left;
    vector<int> right;

    while (mt.size() > 1)
    {
        int s1 = *mt.rbegin();
        mt.erase(mt.find(s1));
        int s2 = *mt.rbegin();
        mt.erase(mt.find(s2));

        left.push_back(s1);
        right.push_back(s2);
        int sum = s1 + s2;
        sum = (sum + 1) / 2;
        mt.insert(sum);
    }

    cout << *mt.begin() << endl;

    for (int i = 0; i < n - 1; i++)
        cout << left[i] << " " << right[i] << endl;
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