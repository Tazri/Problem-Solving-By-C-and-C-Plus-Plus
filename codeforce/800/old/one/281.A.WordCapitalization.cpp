// https://codeforces.com/problemset/problem/281/A
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

bool isLower(char c)
{
    return tolower(c) == c;
}

int main()
{
    optimize();
    string word;

    cin >> word;

    word[0] = toupper(word[0]);
    cout << word << endl;
    return 0;
}