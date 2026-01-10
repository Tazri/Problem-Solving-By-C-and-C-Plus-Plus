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

#define endl '\n'

void getWords(vector<string> &words)
{
    string line;
    getline(cin, line);
    if (line.empty())
        return;
    stringstream ss(line);
    string w;
    while (ss >> w)
        words.push_back(w);
}

void program()
{
    vector<string> words;
    map<string, string> mp;
    while (true)
    {
        getWords(words);
        if (words.empty())
            break;

        if (words.size() == 2)
        {
            mp[words[1]] = words[0];
        }
        else if (words.size() == 1)
        {
            if (mp.count(words[0]))
                cout << mp[words.back()] << endl;
            else
                cout << "eh" << endl;
        }
        words.clear();
    }

    while (true)
    {
        getWords(words);
        if (words.empty())
            break;

        if (words.size() == 2)
        {
            mp[words[1]] = words[0];
        }
        else if (words.size() == 1)
        {
            if (mp.count(words[0]))
                cout << mp[words.back()] << endl;
            else
                cout << "eh" << endl;
        }
        words.clear();
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}