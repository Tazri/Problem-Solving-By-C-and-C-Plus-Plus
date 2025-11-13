// link : https://codeforces.com/problemset/problem/1527/B1
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
    string s;
    cin >> s;
    int zero = 0;
    for (char ch : s)
        if (ch == '0')
            zero++;

    if (zero % 2 == 0)
    {
        cout << "BOB" << endl;
        return;
    }

    if (zero == 1)
        cout << "BOB" << endl;
    else
        cout << "ALICE" << endl;
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