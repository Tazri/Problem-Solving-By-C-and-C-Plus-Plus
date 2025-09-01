// link : https://codeforces.com/problemset/problem/1933/C
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
    int a, b, l;
    cin >> a >> b >> l;
    set<int> take;
    int x = 0;
    int y = 0;
    int cnt = 0;

    for (int x = 0; pow(a, x) <= l; x++)
    {
        for (int y = 0; pow(a, x) * pow(b, y) <= l; y++)
        {
            int r = pow(a, x) * pow(b, y);

            if (l % r != 0)
                continue;
            int k = l / r;

            if (take.count(k))
                continue;
            cnt++;
            take.insert(k);
        }
    }

    cout << cnt << endl;
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