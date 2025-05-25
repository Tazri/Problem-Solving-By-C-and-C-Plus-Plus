// link : https://codeforces.com/problemset/problem/1800/A
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
    int n;
    cin >> n;
    vector<char> sound;
    sound.reserve(n);

    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
        s[i] = tolower(s[i]);

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            sound.push_back(s[i - 1]);
        }
    }
    sound.push_back(s[n - 1]);

    string c = "";
    for (char ch : sound)
        c += ch;

    if (c != "meow")
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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