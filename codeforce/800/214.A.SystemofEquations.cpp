// link : https://codeforces.com/contest/214/problem/A
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
    int n, m;

    cin >> n >> m;
    int cnt = 0;

    for (int a = 0; a * a <= n; a++)
    {
        int b = n - (a * a);

        if ((b * b) + a == m)
            cnt++;
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    // int t;
    // cin >> t;
    // while(t--)
    program();
    return 0;
}