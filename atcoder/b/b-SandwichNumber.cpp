// link : https://atcoder.jp/contests/abc281/tasks/abc281_b?lang=en
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

bool isUpper(char ch)
{
    return ch >= 'A' && ch <= 'Z';
}

void program()
{
    string s;
    cin >> s;

    if (s.size() != 8)
    {
        cout << "No" << endl;
        return;
    }

    if (isUpper(s[0]) == false || isUpper(s[7]) == false)
    {
        cout << "No" << endl;
        return;
    }

    if (s[1] == '0')
    {
        cout << "No" << endl;
        return;
    }

    for (int i = 1; i <= 6; i++)
    {
        if (s[i] < '0' || s[i] > '9')
        {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
    return;
}

int main()
{
    optimize();
    program();
    return 0;
}