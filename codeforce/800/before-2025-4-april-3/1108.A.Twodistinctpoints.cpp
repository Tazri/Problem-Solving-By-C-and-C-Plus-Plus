// link : https://codeforces.com/problemset/problem/1108/A
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
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (l1 != r2)
    {
        cout << l1 << " " << r2 << endl;
    }
    else if (r1 != r2)
    {
        cout << r1 << " " << r2 << endl;
    }
    else if (l1 != l2)
    {
        cout << l1 << " " << l2 << endl;
    }
    else if (r1 != l2)
    {
        cout << r1 << " " << l2 << endl;
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