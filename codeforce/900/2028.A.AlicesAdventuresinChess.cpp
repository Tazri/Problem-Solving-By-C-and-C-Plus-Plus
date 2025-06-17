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

void program()
{
    int n, a, b;
    string dir;
    cin >> n >> a >> b;
    cin >> dir;
    int x = 0;
    int y = 0;

    for (int i = 0; i < 15; i++)
    {

        for (char ch : dir)
        {
            if (ch == 'N')
                y++;
            else if (ch == 'E')
                x++;
            else if (ch == 'S')
                y--;
            else if (ch == 'W')
                x--;
            if (x == a && y == b)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
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