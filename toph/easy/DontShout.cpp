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

bool ok(string &s)
{
    bool ok = true;
    for (char ch : s)
    {
        char u = toupper(ch);

        if ('A' <= u && u <= 'Z')
        {
            if (ch != u)
            {
                ok = false;
                break;
            }
        }
    }

    return !ok;
}

void program()
{
    string line;
    getline(cin, line);
    cin.ignore();

    stringstream ss(line);

    vector<string> words;

    string w;
    while (ss >> w)
    {
        if (ok(w))
            words.push_back(w);
    }

    for (int i = 0; i < words.size(); i++)
        cout << words[i] << " \n"[words.size() - 1 == i];
}

int32_t main()
{
    optimize();
    program();
    return 0;
}