// link : https://codeforces.com/contest/1933/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n;
    cin >> n;
    int sum = 0;
    int mn = 0;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (ai >= 0)
            sum += ai;
        else
            sum -= ai;

        if (i == 0)
            mn = ai;
        mn = min(mn, ai);
    }

    cout << sum << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}