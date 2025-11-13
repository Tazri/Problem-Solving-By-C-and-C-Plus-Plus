// link : https://codeforces.com/contest/265/problem/A
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
    string a, b;
    cin >> a;
    cin >> b;

    int i = 0;

    for (char ch : b)
    {
        if (ch == a[i])
            i++;
    }

    cout << i + 1 << endl;
}

int main()
{
    optimize();
    // int t;
    // cin >> t ;
    // while(t--)
    program();
    return 0;
}