// link : https://codeforces.com/contest/1372/problem/A
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

    for (int i = 1; i <= n; i++)
    {
        cout << 5 << " \n"[i == n];
    }
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