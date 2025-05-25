// link : https://www.hackerrank.com/challenges/strong-password/problem
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

bool isSpecial(char ch)
{
    string s = "!@#$%^&*()-+";

    for (char c : s)
    {
        if (c == ch)
            return true;
    }
    return false;
}

void program()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool hn = false;
    bool hA = false;
    bool ha = false;
    bool hs = false;

    for (char ch : s)
    {
        if (ch >= 'A' && ch <= 'Z')
            hA = true;
        else if (ch >= 'a' && ch <= 'z')
            ha = true;
        else if (isSpecial(ch))
            hs = true;
        else if (ch >= '0' && ch <= '9')
            hn = true;
    }

    int r = 4;
    if (hn)
        r--;
    if (hA)
        r--;
    if (ha)
        r--;
    if (hs)
        r--;

    n += r;
    int need = 0;
    if (n < 6)
        need = 6 - n;
    need += r;

    cout << need << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}