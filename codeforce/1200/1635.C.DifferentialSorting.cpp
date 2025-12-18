// link : https://codeforces.com/problemset/problem/1635/C
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

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    bool isOk = true;

    for (int i = 1; i < n; i++)
        if (v[i - 1] > v[i])
        {
            isOk = false;
            break;
        }

    if (isOk)
    {
        cout << 0 << endl;
        return;
    }

    int b = v.back();
    int a = v[n - 2];

    if (a > b || v.back() < 0)
    {
        cout << -1 << endl;
        return;
    }

    int y = n - 2;
    int z = n - 1;

    cout << n - 2 << endl;
    for (int i = 0; i < n - 2; i++)
    {
        cout << i + 1 << " " << y + 1 << " " << z + 1 << endl;
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