// link : https://codeforces.com/problemset/problem/263/A
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

    int x, y;
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            int input;
            cin >> input;

            if (input)
            {
                y = row;
                x = col;
            }
        }
    }

    int xDistance = x > 3 ? x - 3 : 3 - x;
    int yDistance = y > 3 ? y - 3 : 3 - y;
    cout << xDistance + yDistance << endl;
    return 0;
}