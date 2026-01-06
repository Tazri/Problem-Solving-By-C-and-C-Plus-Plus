// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q
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

int len(int n)
{
    if (n == 1)
        return 1;

    return 1 + len(n & 1 ? n * 3 + 1 : n / 2);
}

void program()
{
    int n;
    cin >> n;
    cout << len(n) << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}