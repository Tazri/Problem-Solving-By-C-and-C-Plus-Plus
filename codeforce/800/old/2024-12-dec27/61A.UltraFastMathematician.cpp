// link : https://codeforces.com/problemset/problem/61/A
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
    string a, b;
    cin >> a;
    cin >> b;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
            cout << 0;
        else
            cout << 1;
    }

    cout << endl;

    return 0;
}