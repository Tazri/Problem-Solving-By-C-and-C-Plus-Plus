// link : https://codeforces.com/problemset/problem/1607/A
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

    vector<char> mp(s.size());

    for (int i = 0; i < s.size(); i++)
    {
        mp[(int)s[i] - (int)'a'] = i;
    }

    string word;
    cin >> word;

    int time = 0;

    for (int i = 1; i < word.size(); i++)
    {
        int wi = (int)word[i] - (int)'a';
        int pwi = (int)word[i - 1] - (int)'a';
        int d = abs(mp[wi] - mp[pwi]);

        time += d;
    }

    cout << time << endl;
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