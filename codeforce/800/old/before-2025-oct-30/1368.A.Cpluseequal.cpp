// link : https://codeforces.com/problemset/problem/1368/A
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
    int a, b, n;
    cin >> a >> b >> n;

    int move = 0;

    while (a <= n && b <= n)
    {
        if (a < b)
            a += b;
        else
            b += a;
        move++;
    }
    cout << move << endl;
}

int main()
{
    optimize();
    int n;
    cin >> n;
    while (n--)
        program();
    return 0;
}