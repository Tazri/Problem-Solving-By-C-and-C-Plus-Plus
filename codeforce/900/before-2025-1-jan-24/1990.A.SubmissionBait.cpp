// link : https://codeforces.com/problemset/problem/1990/A
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
    int n;
    cin >> n;
    vector<bool> mp(n + 1, false);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        mp[a] = mp[a] ? false : true;
    }

    int isWin = false;
    for (bool i : mp)
    {
        if (i)
        {
            isWin = true;
            break;
        }
    }

    if (isWin)
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