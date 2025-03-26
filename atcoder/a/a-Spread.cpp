// link : https://atcoder.jp/contests/abc329/tasks/abc329_a?lang=en
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
    string w;
    cin >> w;

    cout << w[0];

    for (int i = 1; i < w.size(); i++)
    {
        cout << " " << w[i];
    }
    cout << endl;
    return 0;
}