// link : https://codeforces.com/problemset/problem/1790/A
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

#define PI30 "3141592653589793238462643383279"

void program()
{
    string pi = PI30;
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == pi[i])
            cnt++;
        else
            break;
    }
    cout << cnt << endl;
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