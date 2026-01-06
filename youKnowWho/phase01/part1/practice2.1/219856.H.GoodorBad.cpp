// link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
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

    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] != s[i - 1] && s[i] != s[i + 1])
        {
            cout << "Good" << endl;
            return;
        }
    }
    cout << "Bad" << endl;
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