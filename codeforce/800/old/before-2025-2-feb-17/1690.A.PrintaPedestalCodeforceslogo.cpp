// link : https://codeforces.com/contest/1690/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n;
    cin >> n;
    int h1, h2, h3;
    int r = n % 3;
    int b = n / 3;
    if (r == 0)
    {
        h1 = b + 1;
        h2 = b;
        h3 = b - 1;
    }
    else if (r == 1)
    {
        h1 = b + 2;
        h2 = b;
        h3 = b - 1;
    }
    else
    {
        h1 = b + 2;
        h2 = b + 1;
        h3 = b - 1;
    }

    cout << h2 << " " << h1 << " " << h3 << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}