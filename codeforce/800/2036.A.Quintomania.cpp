// link : https://codeforces.com/problemset/problem/2036/A
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
    int n;
    cin >> n;

    int prev, curr;

    cin >> prev;
    bool isPerfect = true;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> curr;

        int diff = curr > prev ? curr - prev : prev - curr;

        if (diff != 5 && diff != 7)
        {
            isPerfect = false;
        }
        prev = curr;
    }

    cout << (isPerfect ? "YES" : "NO") << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        test();
    }
    return 0;
}