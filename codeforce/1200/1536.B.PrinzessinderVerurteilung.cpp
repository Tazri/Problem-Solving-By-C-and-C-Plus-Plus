// link : https://codeforces.com/problemset/problem/1536/B
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

void up(string &s)
{
    reverse(s.begin(), s.end());
    bool did = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] + 1 <= 'z')
        {
            s[i]++;
            did = true;
            break;
        }
        else
        {
            s[i] = 'a';
        }
    }

    if (!did)
    {
        s.push_back('a');
    }
    reverse(s.begin(), s.end());
}

void program()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string mex = "a";
    while (s.find(mex) != string::npos)
    {
        up(mex);
    }

    cout << mex << endl;
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