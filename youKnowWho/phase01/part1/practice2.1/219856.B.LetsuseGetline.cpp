// link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
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
    getline(cin, s);

    for (char ch : s)
        if (ch == '\\')
            break;
        else
            cout << ch;
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}