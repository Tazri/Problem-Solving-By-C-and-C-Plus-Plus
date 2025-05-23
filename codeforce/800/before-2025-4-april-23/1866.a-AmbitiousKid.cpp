// link : https://codeforces.com/problemset/problem/1866/A
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

    int mn;
    cin >> mn;

    if (mn < 0)
        mn *= -1;

    for (int i = 1; i < n; i++)
    {
        int ai;
        cin >> ai;
        ai = ai < 0 ? ai * -1 : ai;

        mn = min(ai, mn);
    }

    cout << mn << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}