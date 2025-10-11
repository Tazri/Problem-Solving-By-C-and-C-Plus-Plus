// link : https://codeforces.com/problemset/problem/1906/A
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

#define sz 3
vector<vector<char>> board(sz, vector<char>(sz));
vector<vector<bool>> visitmp(sz, vector<bool>(sz, false));
vector<int> di = {1, 1, 1, -1, -1, -1, 0, 0};
vector<int> dj = {1, 0, -1, 1, 0, -1, 1, -1};

int v(char c)
{
    return (int)c - 'A';
}

void takeInput()
{
    for (int i = 0; i < sz; i++)
    {
        string l;
        cin >> l;
        for (int j = 0; j < sz; j++)
        {
            board[i][j] = l[j];
        }
    }
}

string minstr(string a, string b)
{
    if (a == b)
    {
        return a;
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (v(a[i]) < v(b[i]))
            return a;
        else if (v(a[i]) > v(b[i]))
            return b;
    }
    return b;
}

string dps(int i, int j, string word)
{
    if (word.size() >= sz)
        return word;

    visitmp[i][j] = true;
    word += board[i][j];
    string smallWord = "CCC";

    for (int k = 0; k < di.size(); k++)
    {
        int ni = i + di[k];
        int nj = j + dj[k];

        if (ni < 0 || nj < 0 || ni >= sz || nj >= sz)
            continue;

        if (visitmp[ni][nj])
            continue;

        string w = dps(ni, nj, word);

        smallWord = minstr(smallWord, w);
    }

    visitmp[i][j] = false;

    return smallWord;
}

void program()
{
    takeInput();
    string ans = "CCC";
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            if (v(ans[0]) < v(board[i][j]))
                continue;

            ans = minstr(dps(i, j, ""), ans);
        }
    }
    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}