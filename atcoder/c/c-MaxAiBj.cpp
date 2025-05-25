// link : https://atcoder.jp/contests/abc373/tasks/abc373_c?lang=en
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
    int sum;
    int mx;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (i == 0)
            sum = ai;
        else
            sum = max(sum, ai);
    }

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        if (i == 0)
            mx = ai;
        else
            mx = max(mx, ai);
    }

    cout << sum + mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}