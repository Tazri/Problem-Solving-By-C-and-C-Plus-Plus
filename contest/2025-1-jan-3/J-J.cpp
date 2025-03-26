// link : https://codeforces.com/problemset/problem/1673/A
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

#define winBob(diff) cout << "Bob " << diff << endl
#define winAlice(diff) cout << "Alice " << diff << endl

int getScore(char ch)
{
    return ((int)ch - (int)'a') + 1;
}

void round()
{
    string s;
    cin >> s;

    if (s.size() == 1)
    {
        int score = getScore(s[0]);
        winBob(score);
        return;
    }

    // if it even then
    if (s.size() % 2 == 0)
    {
        int score = 0;

        for (char ch : s)
        {
            score += getScore(ch);
        }
        winAlice(score);
        return;
    }

    int score = 0;
    for (char ch : s)
    {
        score += getScore(ch);
    }

    int lastIndex = s.size() - 1;
    int mn = min(getScore(s[0]), getScore(s[lastIndex]));

    score -= mn;
    winAlice(score - mn);
    return;
}

int main()
{
    optimize();
    int r;
    cin >> r;
    while (r--)
        round();
    return 0;
}