// link: https://codeforces.com/contest/742/problem/A
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

    if (n == 0)
    {
        cout << 1 << endl;
        return;
    }

    if (n == 1)
    {
        cout << 8 << endl;
        return;
    }
    n--;
    n %= 4;

    if (n == 0)
        cout << 8 << endl;
    else if (n == 1)
        cout << 4 << endl;
    else if (n == 2)
        cout << 2 << endl;
    else
        cout << 6 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}