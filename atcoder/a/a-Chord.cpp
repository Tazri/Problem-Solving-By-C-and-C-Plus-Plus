// link : https://atcoder.jp/contests/abc312/tasks/abc312_a?lang=en
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
    vector<string> l = {
        "ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
    string s;
    cin >> s;

    for (string si : l)
    {
        if (s == si)
        {
            cout << "Yes" << endl;
            return;
        }
    }

    cout << "No" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}