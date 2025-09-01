// link : https://codeforces.com/problemset/problem/2074/C
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

bool check(int a, int b)
{
    int c = a ^ b;

    if ((a + b) > c && (a + c) > b && (b + c) > a)
        return true;

    return false;
}

void program()
{
    int x;
    cin >> x;

    int y = 1;

    int time = 0;
    while (y < x)
    {
        if (check(x, y))
        {
            cout << y << endl;
            return;
        }

        y <<= 1;
        y |= 1;
        time++;

        if (time >= 32)
            break;
    }

    cout << -1 << endl;
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