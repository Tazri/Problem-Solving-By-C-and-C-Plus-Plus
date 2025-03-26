// link : https://atcoder.jp/contests/abc294/tasks/abc294_b?lang=en
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

char getChar(int n)
{
    if (n == 0)
    {
        return '.';
    }

    n--;
    return (char)((int)'A' + n);
}

void program()
{
    int h, w;

    cin >> h >> w;

    vector<vector<char>> matrix(h);

    for (int i = 0; i < h; i++)
    {
        matrix[i] = vector<char>(w);

        for (int j = 0; j < w; j++)
        {
            int idx;
            cin >> idx;

            matrix[i][j] = getChar(idx);
        }
    }

    for (int i = 0; i < h; i++)
    {
        cout << matrix[i][0];
        for (int j = 1; j < w; j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}