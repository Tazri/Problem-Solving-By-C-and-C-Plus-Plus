// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/T
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

int cnt = 0;
int n, r;
void ncr(int i = 0, int take = 0)
{
    if (take >= r)
    {
        cnt++;
        return;
    }

    if (i >= n)
        return;
    ncr(i + 1, take + 1);
    ncr(i + 1, take);
}

void program()
{
    cin >> n >> r;
    ncr();
    cout << cnt << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}