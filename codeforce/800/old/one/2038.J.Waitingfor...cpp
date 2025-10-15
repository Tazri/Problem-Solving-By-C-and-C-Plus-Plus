// link : https://codeforces.com/problemset/problem/2038/J

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

int main()
{
    optimize();
    int t;
    cin >> t;

    int peoples = 0;
    while (t--)
    {
        int count;

        char e;

        cin >> e >> count;

        if (e == 'P')
        {
            peoples += count;
            continue;
        }

        if (count <= peoples)
        {
            peoples -= count;
            cout << "NO" << endl;
            continue;
        }

        peoples = 0;
        cout << "YES" << endl;
    }
    return 0;
}