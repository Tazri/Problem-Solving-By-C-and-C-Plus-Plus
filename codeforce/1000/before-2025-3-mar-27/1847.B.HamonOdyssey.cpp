// link : https://codeforces.com/problemset/problem/1847/B
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
    int g = 0;
    cin >> n;
    int s = -1;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (s == -1)
            s = ai;
        else
            s &= ai;

        if (s == 0)
        {
            s = -1;
            g++;
        }
    }

    cout << max(g, 1) << endl;
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