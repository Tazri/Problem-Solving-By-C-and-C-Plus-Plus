// link : https://codeforces.com/problemset/problem/1997/A
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

char getDiffChar(char ch, char ch1)
{
    for (int i = 0; i < 26; i++)
    {
        char newCh = char((int)'a' + i);
        if (newCh != ch && newCh != ch1)
        {
            return newCh;
        }
    }

    return ch;
}

void test()
{
    string password;
    cin >> password;

    cout << password[0];

    bool isPrinted = false;

    for (int i = 1; i < password.size(); i++)
    {
        if (isPrinted)
        {
            cout << password[i];
            continue;
        }

        char prev = password[i - 1];
        char curr = password[i];

        if (prev == curr)
        {
            char next = i < password.size() - 1 ? password[i + 1] : prev;

            cout << getDiffChar(prev, next) << password[i];
            isPrinted = true;
        }
        else
        {
            cout << password[i];
        }
    }

    if (!isPrinted)
    {
        char lastChar = password[password.size() - 1];
        cout << getDiffChar(lastChar, lastChar);
    }

    cout << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}