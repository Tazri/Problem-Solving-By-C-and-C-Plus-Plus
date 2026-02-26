// linK: https://codeforces.com/problemset/problem/835/A
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
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;

    int f1 = (v1 * s) + (2 * t1);
    int f2 = (v2 * s) + (2 * t2);

    if (f1 < f2)
    {
        cout << "First" << endl;
    }
    else if (f2 < f1)
    {
        cout << "Second" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}