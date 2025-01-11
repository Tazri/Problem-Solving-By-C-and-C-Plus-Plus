// link : https://codeforces.com/problemset/problem/2032/A
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

void test()
{
    int n;

    cin >> n;
    int on = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        int state;
        cin >> state;

        if (state)
            on++;
    }

    int maxOn = min(on, 2 * n - on);
    int minOn = on & 1;

    cout << minOn << " " << maxOn << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}