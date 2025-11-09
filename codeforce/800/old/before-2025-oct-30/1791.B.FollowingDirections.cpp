// link : https://codeforces.com/problemset/problem/1791/B
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
    string s;
    cin >> s;

    int x = 0;
    int y = 0;
    bool isCatch = false;
    for (char ch : s)
    {
        if (ch == 'L')
            x--;
        else if (ch == 'R')
            x++;
        else if (ch == 'U')
            y++;
        else
            y--;

        if (x == 1 && y == 1)
            isCatch = true;
    }

    if (isCatch)
        cout << "YES" << endl;
    else
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