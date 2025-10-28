// link : https://codeforces.com/problemset/problem/1373/B
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
    string s;
    cin >> s;
    int n = s.size();

    int one = 0;
    int zero = 0;

    for (char ch : s)
    {
        if (ch == '1')
            one++;
        else
            zero++;
    }

    int mn = min(zero, one);

    if (mn & 1)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NET" << endl;
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