// link : https://codeforces.com/problemset/problem/233/A
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
    if (n & 1)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        v[i] = i;

    for (int i = 1; i <= n; i += 2)
        swap(v[i], v[i + 1]);

    for (int i = 1; i <= n; i++)
        cout << v[i] << " \n"[i == n];
}

int main()
{
    optimize();
    program();
    return 0;
}