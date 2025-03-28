// link : https://codeforces.com/problemset/problem/118/A
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

bool isVowel(char a)
{
    string v = "AEIOUYaeiouy";

    for (char ch : v)
    {
        if (ch == a)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    optimize();
    string str;

    cin >> str;

    string res = "";

    for (char ch : str)
    {
        if (isVowel(ch))
            continue;

        char lowerCh = tolower(ch);
        res = res + "." + lowerCh;
    }

    cout << res << endl;
    return 0;
}