// link : https://codeforces.com/contest/1339/problem/A
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
int d = (int)'z' - (int)'a' + 1;

void space(int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << " ";
    }
}

void program()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    int t = 4 * n - 2;
    int c = t / 2;
    int d = (c - 1) / 2;

    cout << d + 1 << endl;
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