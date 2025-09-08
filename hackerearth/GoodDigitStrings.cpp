// link : https://www.hackerrank.com/contests/eastern-university-selection-contest-2025/challenges/good-digit-strings/problem
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

int primeTime(int n)
{
    int mul = 1;

    for (int i = 0; i < n; i++)
    {
        mul *= 4;
    }

    return mul;
}

int evenTime(int n)
{
    int mul = 1;

    for (int i = 0; i < n; i++)
    {
        mul *= 5;
    }

    return mul;
}

void program()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 5 << endl;
        return;
    }

    int even = (n & 1) ? (n / 2) + 1 : n / 2;
    int prme = n / 2;

    int ans = evenTime(even) * primeTime(prme);

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}