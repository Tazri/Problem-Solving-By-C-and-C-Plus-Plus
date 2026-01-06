// link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
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
    int mn = 0;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        int cnt = 0;
        while ((vi % 2 == 0))
        {
            vi /= 2;
            cnt++;
        }
        if (i == 0)
            mn = cnt;
        mn = min(mn, cnt);
    }

    cout << mn << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}