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

string s = "aeiou";
void repeat(char ch, int t)
{
    for (int i = 0; i < t; i++)
        cout << ch;
}
void program()
{
    int n;
    cin >> n;

    if (n <= s.size())
    {
        for (int i = 0; i < n; i++)
        {
            cout << s[i];
        }
        cout << endl;
        return;
    }

    int r = (n + 4) / 5;
    int left = n % 5;

    if (left == 0)
    {
        for (int i = 0; i < 5; i++)
        {
            repeat(s[i], r);
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < left; i++)
        repeat(s[i], r);

    for (int i = left; i < 5; i++)
    {
        repeat(s[i], r - 1);
    }
    cout << endl;
}

int main()
{
    optimize();
    int n;
    cin >> n;
    while (n--)
        program();
    return 0;
}