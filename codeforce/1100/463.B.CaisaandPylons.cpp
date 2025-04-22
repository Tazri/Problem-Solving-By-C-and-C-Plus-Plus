// link : https://codeforces.com/problemset/problem/463/B
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
    int e = 0;
    int prev = 0;
    int mn = 0;

    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;

        int d = prev - h;
        e += d;

        mn = min(mn, e);
        prev = h;
    }

    cout << mn * -1 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}