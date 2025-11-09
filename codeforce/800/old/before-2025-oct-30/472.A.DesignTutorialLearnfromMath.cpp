// link : https://codeforces.com/problemset/problem/472/A
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

    if (n & 1)
        cout << 9 << " " << n - 9 << endl;
    else
        cout << 4 << " " << n - 4 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}