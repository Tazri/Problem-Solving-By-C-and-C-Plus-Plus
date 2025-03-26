// link : https://codeforces.com/problemset/problem/1883/B
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

void test()
{
    int size = ((int)'z' - (int)'a') + 1;
    vector<bool> mp(size, false);
    int n, k;
    string word;
    cin >> n >> k;
    cin >> word;

    for (char ch : word)
    {
        int chi = (int)ch - (int)'a';
        mp[chi] = !mp[chi];
    }

    int totalOdds = 0;

    for (bool i : mp)
    {
        if (i)
            totalOdds++;
    }

    totalOdds -= k;

    if (totalOdds <= 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}