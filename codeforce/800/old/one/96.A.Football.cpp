// link : https://codeforces.com/problemset/problem/96/A
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
    string players;

    cin >> players;

    char last = players[0];
    bool isFirst = true;
    int l = 1;
    for (char i : players)
    {
        if (isFirst)
        {
            isFirst = false;
            last = i;
            continue;
        }

        if (i == last)
        {
            l++;
        }
        else
        {
            last = i;
            l = 1;
        }

        if (l >= 7)
            break;
    }

    cout << (l < 7 ? "NO" : "YES") << endl;
    return 0;
}