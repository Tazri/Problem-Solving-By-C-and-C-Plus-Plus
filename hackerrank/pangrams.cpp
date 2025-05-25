// link : https://www.hackerrank.com/contests/101aug14/challenges/pangrams
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
    vector<bool> mp((int)'z' - (int)'a' + 1, false);

    for (char ch : s)
    {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z')
        {
            int chi = (int)ch - (int)'a';
            mp[chi] = true;
        }
    }

    for (int i = 0; i < mp.size(); i++)
    {
        char ch = (char)(i + (int)'a');
        if (!mp[i])
        {
            cout << "not pangram" << endl;
            return;
        }
    }

    cout << "pangram" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}