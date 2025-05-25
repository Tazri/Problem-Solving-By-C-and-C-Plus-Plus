// link : https://atcoder.jp/contests/abc321/tasks/abc321_a?lang=en
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
    int n;
    cin >> n;

    if (n < 10)
    {
        cout << "Yes" << endl;
        return;
    }

    int prev = n % 10;
    n /= 10;

    while (n)
    {
        int d = n % 10;

        if (prev >= d)
        {
            cout << "No" << endl;
            return;
        }
        prev = d;
        n /= 10;
    }

    cout << "Yes" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}