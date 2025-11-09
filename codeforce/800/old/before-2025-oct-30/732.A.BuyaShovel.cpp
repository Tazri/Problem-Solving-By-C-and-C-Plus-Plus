// link : https://codeforces.com/problemset/problem/732/A
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

void program()
{
    int k, r;
    cin >> k >> r;
    for (int i = 1; i <= 10; i++)
    {
        int price = i * k;

        if (price % 10 == 0 || (price - r) % 10 == 0)
        {
            cout << i << endl;
            return;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}