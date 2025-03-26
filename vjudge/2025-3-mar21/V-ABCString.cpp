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

int getAi(char c)
{
    return (int)((int)c - (int)'A');
}

bool isBalanced(string s)
{
    int b = 0;

    for (char ch : s)
    {
        if (ch == ')')
            if (b <= 0)
                return false;
            else
                b--;
        else
            b++;
    }

    if (b != 0)
        return false;
    return true;
}

void program()
{
    string s;
    cin >> s;

    if (s[0] == s[s.size() - 1])
    {
        cout << "NO" << endl;
        return;
    }

    vector<char> brac = {'?', '?', '?'};
    brac[getAi(s[0])] = '(';
    brac[getAi(s[s.size() - 1])] = ')';

    // replace all
    for (int i = 0; i < s.size(); i++)
    {
        int ai = getAi(s[i]);
        s[i] = brac[ai];
    }

    string s1 = s;
    string s2 = s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
        {
            s1[i] = '(';
            s2[i] = ')';
        }
    }

    if (isBalanced(s1) || isBalanced(s2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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