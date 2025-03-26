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

bool isPalindrome(string &s, int li, int ri)
{
    if (li == ri)
        return true;

    while (li < ri)
    {
        if (s[li] != s[ri])
            return false;
        li++;
        ri--;
    }
    return true;
}

void program()
{
    string s;
    cin >> s;
    int li = 0;
    int ri = s.size();
    int mx = 1;
    for (int i = 0; i <= ri; i++)
    {
        for (int j = i; j <= ri; j++)
        {
            int len = j - i + 1;

            if (len <= mx)
                continue;

            if (isPalindrome(s, i, j))
                mx = len;
        }
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}