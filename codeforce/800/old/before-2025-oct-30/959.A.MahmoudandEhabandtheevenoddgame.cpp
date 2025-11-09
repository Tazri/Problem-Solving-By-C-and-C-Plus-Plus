// link : https://codeforces.com/problemset/problem/959/A
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
        cout << "Ehab" << endl;
    else
        cout << "Mahmoud" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}