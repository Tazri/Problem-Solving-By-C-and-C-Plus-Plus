// link : https://codeforces.com/problemset/problem/2028/A
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

void test()
{
    int n, a, b;
    int x = 0, y = 0;
    cin >> n >> a >> b;

    string pos;
    cin >> pos;
    int i = 0;
    int turn = 0;
    while (turn++ < 200)
    {
        char d = pos[i++];

        if (d == 'N')
            y++;
        else if (d == 'E')
            x++;
        else if (d == 'S')
            y--;
        else if (d == 'W')
            x--;

        // cout << "dir : " << d << endl;
        // cout << "x :" << x << endl;
        // cout << "y : " << y << endl;
        // cout << "--------------" << endl;
        if (x == a && y == b)
        {
            cout << "YES" << endl;
            return;
        }

        i %= n;
    }

    cout << "NO" << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}