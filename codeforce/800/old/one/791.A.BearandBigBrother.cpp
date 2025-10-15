// link: https://codeforces.com/problemset/problem/791/A

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
    int l, b;
    int year = 0;
    cin >> l >> b;
    while (l <= b)
    {
        year++;
        l *= 3;
        b *= 2;
    }

    cout << year << endl;
    return 0;
}