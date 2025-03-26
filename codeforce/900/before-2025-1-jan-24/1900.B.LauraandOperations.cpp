// https://codeforces.com/problemset/problem/1900/B
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
    int a, b, c;
    cin >> a >> b >> c;
    int ab = a + b;
    int bc = b + c;
    int ac = a + c;

    int ai = bc & 1 ? 0 : 1;
    int bi = ac & 1 ? 0 : 1;
    int ci = ab & 1 ? 0 : 1;
    cout << ai << " " << bi << " " << ci << endl;
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