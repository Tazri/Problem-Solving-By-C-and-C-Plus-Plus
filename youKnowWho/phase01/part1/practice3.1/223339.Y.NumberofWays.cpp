// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y
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

int go(int s, int e)
{
    if (s >= e)
        return s == e;

    return go(s + 1, e) + go(s + 2, e) + go(s + 3, e);
}

void program()
{
    int s, e;
    cin >> s >> e;
    cout << go(s, e) << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}