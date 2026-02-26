// link : https://codeforces.com/contest/1878/problem/B
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

    for (int i = 1, p = 1; i <= n; i++, p += 2)
    {
        cout << p << " \n"[i == n];
    }
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