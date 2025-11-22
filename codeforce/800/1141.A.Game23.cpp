// link : https://codeforces.com/problemset/problem/1141/A
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
    int n, m;
    cin >> n >> m;
    pair<int, int> ncnt = {0, 0};
    pair<int, int> mcnt = {0, 0};
    while (n % 2 == 0 || n % 3 == 0)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            ncnt.first++;
        }
        if (n % 3 == 0)
        {
            n /= 3;
            ncnt.second++;
        }
    }

    while (m % 2 == 0 || m % 3 == 0)
    {
        if (m % 2 == 0)
        {
            m /= 2;
            mcnt.first++;
        }
        if (m % 3 == 0)
        {
            m /= 3;
            mcnt.second++;
        }
    }

    if (n != m)
    {
        cout << -1 << endl;
        return;
    }

    mcnt.first -= ncnt.first;
    mcnt.second -= ncnt.second;

    if (mcnt.first < 0 || mcnt.second < 0)
    {
        cout << -1 << endl;
        return;
    }

    int cnt = mcnt.first + mcnt.second;

    cout << cnt << endl;
}

int main()
{
    optimize();

    program();
    return 0;
}