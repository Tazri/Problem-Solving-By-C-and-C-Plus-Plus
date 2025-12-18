// link : https://codeforces.com/problemset/problem/1582/C
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

bool isPalinedrome(string s)
{
    int n = s.size();

    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }

    return true;
}

int countRm(string s, char ch)
{
    int n = s.size();

    int l = 0;
    int r = n - 1;
    int cnt = 0;
    while (l <= r)
    {
        if (s[l] == s[r])
        {
            l++;
            r--;
            continue;
        }

        if (s[l] == ch)
        {
            cnt++;
            l++;
        }

        if (s[r] == ch)
        {
            cnt++;
            r--;
        }
    }

    return cnt;
}

void program()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (isPalinedrome(s))
    {
        cout << 0 << endl;
        return;
    }

    int l = 0;
    int r = n - 1;

    while (s[l] == s[r])
    {
        l++;
        r--;
    }

    char ch1 = s[l];
    char ch2 = s[r];

    string p1 = "";
    string p2 = "";

    for (char ch : s)
    {
        if (ch != ch1)
            p1.push_back(ch);

        if (ch != ch2)
            p2.push_back(ch);
    }

    bool p1Ok = isPalinedrome(p1);
    bool p2Ok = isPalinedrome(p2);
    if (p1Ok == false && p2Ok == false)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> v;

    if (p1Ok)
        v.push_back(countRm(s, ch1));

    if (p2Ok)
        v.push_back(countRm(s, ch2));

    cout << *min_element(v.begin(), v.end()) << endl;
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