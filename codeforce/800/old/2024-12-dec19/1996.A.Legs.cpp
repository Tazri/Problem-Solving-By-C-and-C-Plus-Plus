// link : https://codeforces.com/problemset/problem/1996/A
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
    int t;
    cin >> t;

    while (t--)
    {
        int legs;
        cin >> legs;

        if (legs == 2 || legs == 4)
        {
            cout << 1 << endl;
            continue;
        }

        int cows = legs / 4;
        legs %= 4;
        int cook = legs / 2;
        cout << cows + cook << endl;
    }
    return 0;
}