// links : https://codeforces.com/contest/78/problem/A

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

bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main()
{
    optimize();
    string l1, l2, l3;

    getline(cin, l1);
    getline(cin, l2);
    getline(cin, l3);

    int total = 0;
    for (char ch : l1)
    {
        if (isVowel(ch))
            total++;
    }

    if (total != 5)
    {
        cout << "NO" << endl;
        return 0;
    }

    total = 0;

    for (char ch : l2)
    {
        if (isVowel(ch))
            total++;
    }

    if (total != 7)
    {
        cout << "NO" << endl;
        return 0;
    }

    total = 0;
    for (char ch : l3)
    {
        if (isVowel(ch))
            total++;
    }

    if (total != 5)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    return 0;
}