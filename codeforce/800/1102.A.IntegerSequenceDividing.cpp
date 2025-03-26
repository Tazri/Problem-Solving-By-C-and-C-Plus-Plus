// link : https://codeforces.com/problemset/problem/1102/A
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

    int r = n % 4;
    if (!r)
    {
        cout << 0 << endl;
        return;
    }

    if (r == 3)
    {
        cout << 0 << endl;
        return;
    }

    cout << 1 << endl;
}

int main()
{
    optimize();

    program();
    return 0;
}