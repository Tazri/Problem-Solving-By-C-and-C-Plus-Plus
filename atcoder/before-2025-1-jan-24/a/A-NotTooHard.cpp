// link : https://atcoder.jp/contests/abc328/tasks/abc328_a?lang=en
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
    int n, x;
    cin >> n >> x;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        if (s <= x)
            sum += s;
    }

    cout << sum << endl;
    return 0;
}