// link : https://codeforces.com/problemset/problem/133/A

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

int main()
{
    optimize();
    string word;

    cin >> word;

    bool isOutput = false;

    for (char ch : word)
    {
        if (ch == 'H' || ch == 'Q' || ch == '9')
        {
            isOutput = true;
            break;
        }
    }

    if (isOutput)

        cout << "YES" << endl;

    else
        cout << "NO" << endl;
    return 0;
}