// link : https://codeforces.com/problemset/problem/139/A
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
    vector<int> v(7);
    for (int i = 0; i < 7; i++)
        cin >> v[i];
    int day = 0;
    while (n)
    {
        n = max(n - v[day], 0);

        if (n == 0)
        {
            cout << day + 1 << endl;
            return;
        }
        day++;
        day %= 7;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}