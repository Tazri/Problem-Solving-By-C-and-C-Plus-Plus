// link : https://atcoder.jp/contests/abc320/tasks/abc320_a?lang=en
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

int pow(int base, int pow)
{
    int ans = 1;
    for (int i = 0; i < pow; i++)
    {
        ans *= base;
    }
    return ans;
}

int main()
{
    optimize();
    int a, b;
    cin >> a >> b;
    int ab = pow(a, b);
    int ba = pow(b, a);
    cout << ab + ba << endl;
    return 0;
}