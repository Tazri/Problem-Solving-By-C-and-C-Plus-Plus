// link : https://codeforces.com/problemset/problem/32/B
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
    string s;
    cin >> s;
    int n = s.size();

    int i = 0;
    string ans = "";
    while (i < n)
    {
        if (i == n - 1)
        {
            ans.push_back('0');
            i++;
            continue;
        }

        if (s[i] == '.' && s[i + 1] == '-')
        {
            ans.push_back('0');
            i++;
        }
        else if (s[i] == '.' && s[i + 1] == '.')
        {
            ans.push_back('0');
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            ans.push_back('1');
            i += 2;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            ans.push_back('2');
            i += 2;
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