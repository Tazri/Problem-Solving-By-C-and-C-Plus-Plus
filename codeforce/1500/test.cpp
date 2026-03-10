#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

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
    vector<string> words;

    for (int i = 2; i < s.size(); i++)
    {
        if (s[i - 2] == 'W' && s[i - 1] == 'U' && s[i] == 'B')
        {
            s[i - 2] = ' ';
            s[i - 1] = ' ';
            s[i] = ' ';
        }
    }

    string w = "";

    for (char ch : s)
    {
        if (ch == ' ')
        {
            if (w.size() >= 1)
                words.push_back(w);
            w = "";
            continue;
        }

        w.push_back(ch);
    }

    if (w.size() >= 1)
        words.push_back(w);

    for (int i = 0; i < words.size(); i++)
        cout << words[i] << " \n"[i == words.size() - 1];
}

int32_t main()
{
    optimize();

    int t = 1;
    // cin >> t;
    while (t--)
        program();
    return 0;
}