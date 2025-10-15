// link : https://codeforces.com/problemset/problem/1931/A
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

char c(int ci)
{
    return (char)((int)'a' + ci - 1);
}

void program()
{
    int n;
    cin >> n;

    if (n <= 27)
    {
        cout << "aa";
        cout << c(n - 2) << endl;
    }
    else if (n <= 53)
    {
        int c3 = 26;
        int left = n - c3;
        int c1 = 1;
        int c2 = left - c1;

        cout << c(c1) << c(c2) << c(c3) << endl;
    }
    else if (n <= 78)
    {
        int c1 = n - 26 - 26;
        cout << c(c1) << c(26) << c(26) << endl;
    }
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