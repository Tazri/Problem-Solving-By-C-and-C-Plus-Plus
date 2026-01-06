// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
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
#define int ll
bool isPossible(int n, int curr = 1)
{
    if (curr == n)
        return true;

    if (curr > n)
        return false;

    return isPossible(n, curr * 10) || isPossible(n, curr * 20);
}

void program()
{
    int n;
    cin >> n;
    if (isPossible(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}