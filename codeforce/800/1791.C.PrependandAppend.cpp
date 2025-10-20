// link : https://codeforces.com/problemset/problem/1791/C
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

    int li = 0;
    int ri = n - 1;

    while (li <= ri)
    {
        if (s[li] != s[ri])
        {
            li++;
            ri--;
        }
        else
            break;
    }

    int len = ri - li + 1;

    cout << len << endl;
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