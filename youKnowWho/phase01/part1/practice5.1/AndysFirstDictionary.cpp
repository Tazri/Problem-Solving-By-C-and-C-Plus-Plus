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
    string word = "";
    string stream;
    set<string> words;

    while (cin >> stream)
    {
        for (char ch : stream)
        {
            char lw = tolower(ch);

            if ('a' <= lw && lw <= 'z')
            {
                word.push_back(lw);
                continue;
            }

            if (word.empty())
                continue;

            words.insert(word);
            word = "";
        }
        if (word.size())
            words.insert(word);
        word = "";
    }

    for (string w : words)
        cout << w << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}