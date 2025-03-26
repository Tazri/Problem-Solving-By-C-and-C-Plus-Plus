// link : https://atcoder.jp/contests/abc235/tasks/abc235_a?lang=en
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

int num(char a, char b, char c)
{
    int an = (int)a - (int)'0';
    int bn = (int)b - (int)'0';
    int cn = (int)c - (int)'0';

    int num = an * 100 + bn * 10 + cn;
    return num;
}

int main()
{
    optimize();
    char a, b, c;
    cin >> a >> b >> c;

    int sum = num(a, b, c) + num(b, c, a) + num(c, a, b);
    cout << sum << endl;
    return 0;
}