// link : https://codeforces.com/problemset/problem/1551/A
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
    int b = n / 3;
    int r = n % 3;

    if (r == 0)
        cout << b << " " << b << endl;
    else if (r == 1)
        cout << b + 1 << " " << b << endl;
    else if (r == 2)
        cout << b << " " << b + 1 << endl;
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