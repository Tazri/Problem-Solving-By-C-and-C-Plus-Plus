// link: https://codeforces.com/problemset/problem/584/A
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
    int n, t;
    cin >> n >> t;

    if (t < 10)
    {
        for (int i = 0; i < n; i++)
            cout << t;
        cout << endl;
    }
    else if (t == 10 && n >= 2)
    {
        cout << 1;
        for (int i = 0; i < n - 1; i++)
            cout << 0;
        cout << endl;
    }
    else
        cout << -1 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}