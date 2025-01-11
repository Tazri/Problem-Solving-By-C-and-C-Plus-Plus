// link : https://codeforces.com/problemset/problem/451/A
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

int main()
{
    optimize();
    int n, m;
    cin >> n >> m;

    int mn = min(n, m);

    if (mn & 1)
    {
        cout << "Akshat" << endl;
    }
    else
    {
        cout << "Malvika" << endl;
    }
    return 0;
}