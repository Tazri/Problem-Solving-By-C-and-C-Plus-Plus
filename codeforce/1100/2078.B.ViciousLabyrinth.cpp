// link : https://codeforces.com/problemset/problem/2078/B
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
    int n, k;
    cin >> n >> k;

    if (n == 2)
    {
        cout << "2 1" << endl;
        return;
    }

    if (k & 1)
        for (int i = 0; i < n - 2; i++)
            cout << n << " ";
    else
        for (int i = 0; i < n - 2; i++)
            cout << n - 1 << " ";

    cout << n << " " << n - 1 << endl;
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