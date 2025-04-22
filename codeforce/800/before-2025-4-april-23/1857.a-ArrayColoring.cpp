// linK : https://codeforces.com/problemset/problem/1857/A
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
    int o = 0;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        if (ai & 1)
            o++;
    }

    if (o & 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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