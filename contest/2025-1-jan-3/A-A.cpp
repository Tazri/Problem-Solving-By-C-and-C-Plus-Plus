// link : https://www.codechef.com/problems/TAXES
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
    while (t--)
    {
        int m;
        cin >> m;
        if (m <= 100)
        {
            cout << m << endl;
        }
        else
        {
            cout << m - 10 << endl;
        }
    }
    return 0;
}