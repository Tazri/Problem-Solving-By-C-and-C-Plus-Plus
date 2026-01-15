// link : https://codeforces.com/problemset/problem/158/C
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

void parsePathDir(string s, vector<string> &dir)
{
    dir.clear();
    string word = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0 && s[i] == '/')
        {
            dir.push_back("/");
            continue;
        }

        if (s[i] != '/')
            word.push_back(s[i]);
        else
        {
            dir.push_back(word);
            word.clear();
        }
    }

    if (word.size())
        dir.push_back(word);
}

void printPath(vector<string> &path)
{
    cout << "/";
    for (string &p : path)
        cout << p << "/";
    cout << endl;
}

void program()
{
    vector<string> dir;
    vector<string> path;

    int n;
    cin >> n;

    while (n--)
    {
        string command;
        cin >> command;

        if (command == "pwd")
        {
            printPath(path);
            continue;
        }

        string pathStringDirection;
        cin >> pathStringDirection;
        parsePathDir(pathStringDirection, dir);

        for (string &d : dir)
        {
            if (d == "/")
            {
                path.clear();
            }
            else if (d == "..")
            {
                if (path.size())
                    path.pop_back();
            }
            else
            {
                path.push_back(d);
            }
        }
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}