// link : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C
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

string bin(int n)
{
    string s = "";

    while (n)
    {
        s.push_back('0' + (n % 2));
        n /= 2;
    }

    return s;
}

bool isPalindrome(string s)
{
    for (int l = 0, r = s.size() - 1; l < r; l++, r--)
        if (s[l] != s[r])
            return false;
    return true;
}

void program()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (isPalindrome(bin(n)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}