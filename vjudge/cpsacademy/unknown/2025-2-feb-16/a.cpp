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
    string s;
    cin >> s;

    int cnt = 1;
    char prev = s[0];

    for (int i = 1; i < s.size(); i++)
    {
        char ch = s[i];

        if (prev == ch)
            continue;

        cnt++;
        prev = ch;
    }

    if (s[0] == '0')
    {
        cnt--;
    }

    cout << cnt << endl;
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