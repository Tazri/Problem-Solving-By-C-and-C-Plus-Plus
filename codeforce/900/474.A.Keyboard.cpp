// link : https://codeforces.com/problemset/problem/474/A
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
    string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char ch;
    cin >> ch;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        char si = s[i];

        int fi = 0;

        for (int j = 0; j < keys.size(); j++)
            if (si == keys[j])
                fi = j;

        if (ch == 'R')
            fi--;
        else
            fi++;
        s[i] = keys[fi];
    }

    cout << s << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}