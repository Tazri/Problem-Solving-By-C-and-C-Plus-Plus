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
    int pos = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == toupper(s[i]))
        {
            pos = i + 1;
            break;
        }
    }

    cout << pos << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}