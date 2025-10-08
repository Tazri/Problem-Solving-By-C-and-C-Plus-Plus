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

bool checkThe(string line)
{
    stringstream ss(line);
    string word;

    while (ss >> word)
    {
        if (word == "the")
            return true;
    }
    return false;
}

char getChar(int n)
{
    return (char)((int)'a' + n);
}

void leftShift(string &line, int n)
{
    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] == ' ')
            continue;
        int v = ((int)line[i] - (int)'a') - n;

        v = ((v % 26) + 26) % 26;
        line[i] = getChar(v);
    }
}

void rightShift(string &line, int n)
{
    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] == ' ')
            continue;
        int v = ((int)line[i] - (int)'a') + n;
        v %= 26;
        line[i] = getChar(v);
    }
}

void program()
{
    int n;
    cin >> n;
    cin.ignore();
    string line;
    getline(cin, line);

    if (checkThe(line))
    {
        leftShift(line, n);
        cout << line << endl;
    }
    else
    {
        rightShift(line, n);
        cout << line << endl;
    }
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