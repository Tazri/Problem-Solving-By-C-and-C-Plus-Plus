// link : https://atcoder.jp/contests/abc153/tasks/abc153_b?lang=en
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
    int h, n;
    cin >> h >> n;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        sum += ai;
    }

    if (sum >= h)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}