// link : https://codeforces.com/problemset/problem/1999/B
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

bool isWin(int a1, int b1, int a2, int b2)
{
    int a = 0;
    int b = 0;

    if (a1 > b1)
    {
        a++;
    }
    else if (a1 < b1)
    {
        b++;
    }

    if (a2 < b2)
    {
        b++;
    }
    else if (a2 > b2)
    {
        a++;
    }

    if (a > b)
    {
        return true;
    }
    return false;
}

void program()
{
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int wins = 0;

    if (isWin(a1, b1, a2, b2))
        wins += 2;
    if (isWin(a1, b2, a2, b1))
        wins += 2;
    cout << wins << endl;
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