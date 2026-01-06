// link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
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

    for (char &ch : s)
    {
        if (ch == ',')
            ch = ' ';
        else if (tolower(ch) == ch)
            ch = toupper(ch);
        else
            ch = tolower(ch);
    }

    cout << s << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}