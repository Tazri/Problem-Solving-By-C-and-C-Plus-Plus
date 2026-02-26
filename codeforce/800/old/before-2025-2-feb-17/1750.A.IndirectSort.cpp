// link : https://codeforces.com/contest/1750/problem/A
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
    int first;
    cin >> first;

    for (int i = 1; i < n; i++)
    {
        int tmp;
        cin >> tmp;
    }

    if (first == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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