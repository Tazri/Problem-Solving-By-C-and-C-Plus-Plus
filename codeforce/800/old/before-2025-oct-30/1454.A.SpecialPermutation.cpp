// link : https://codeforces.com/contest/1454/problem/A
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
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 1, k = n; i <= n; i++, k--)
    {
        v[i] = k;
    }

    if (n & 1)
    {
        int m = (n / 2) + 1;
        swap(v[m], v[1]);
    }

    for (int i = 1; i <= n; i++)
        cout << v[i] << " \n"[i == n];
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