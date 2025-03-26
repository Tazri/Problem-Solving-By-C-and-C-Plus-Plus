// link : https://atcoder.jp/contests/abc236/tasks/abc236_b?lang=en
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
    int n;
    cin >> n;
    int card = 0;

    for (int i = 0; i < (4 * n) - 1; i++)
    {
        int temp;
        cin >> temp;
        card ^= temp;
    }

    cout << card << endl;
    return 0;
}