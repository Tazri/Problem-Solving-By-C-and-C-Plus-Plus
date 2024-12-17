// link : https://codeforces.com/problemset/problem/266/A
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

int main()
{
    optimize();
    int a;
    cin >> a;
    string word;
    cin >> word;

    char last = word[0];
    int ans = 0;
    for (int i = 1; i < word.size(); i++)
    {
        if (word[i] == last)
        {
            ans++;
        }
        else
        {
            last = word[i];
        }
    }
    cout << ans << endl;
    return 0;
}