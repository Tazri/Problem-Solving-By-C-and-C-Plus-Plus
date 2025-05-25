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

string s;
int zeroOne = 0;
int oneZero = 0;

void cnt(int i)
{
    if (i > 0)
    {
        if (s[i - 1] == '0' && s[i] == '1')
            zeroOne++;
        else if (s[i - 1] == '1' && s[i] == '0')
            oneZero++;
    }

    if (i < s.size() - 1)
    {
        if (s[i] == '0' && s[i + 1] == '1')
            zeroOne++;
        else if (s[i] == '1' && s[i + 1] == '0')
            oneZero++;
    }
}

void decnt(int i)
{
    if (i > 0)
    {
        if (s[i - 1] == '0' && s[i] == '1')
            zeroOne--;
        else if (s[i - 1] == '1' && s[i] == '0')
            oneZero--;
    }

    if (i < s.size() - 1)
    {
        if (s[i] == '0' && s[i + 1] == '1')
            zeroOne--;
        else if (s[i] == '1' && s[i + 1] == '0')
            oneZero--;
    }
}

void program()
{
    cin >> s;
    zeroOne = 0;
    oneZero = 0;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == '0' && s[i] == '1')
            zeroOne++;
        else if (s[i - 1] == '1' && s[i] == '0')
            oneZero++;
    }

    int ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        decnt(i);
        s[i] = s[i] == '1' ? '0' : '1';
        cnt(i);
        if (zeroOne == oneZero)
            ans++;
        decnt(i);
        s[i] = s[i] == '1' ? '0' : '1';
        cnt(i);
    }

    cout << ans << endl;
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