// link : https://codeforces.com/problemset/problem/2043/B
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
    int n, d;
    cin >> n >> d;

    cout << 1;

    for (int i = 3; i <= 9; i += 2)
    {

        if (i == 3)
        {
            if (n >= 3 || d == 3 || d == 6 || d == 9)
                cout << " " << 3;
        }
        else if (i == 5)
        {
            if (d == 5)
                cout << " " << 5;
        }
        else if (i == 7)
        {
            if (d == 7 || n >= 3)
                cout << " " << 7;
        }
        else if (i == 9)
        {
            if (n >= 6 || d == 9)
                cout << " " << 9;

            else if (d == 3 || d == 6)
            {
                if (n >= 3)
                    cout << " " << 9;
            }
        }
    }

    cout << endl;
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