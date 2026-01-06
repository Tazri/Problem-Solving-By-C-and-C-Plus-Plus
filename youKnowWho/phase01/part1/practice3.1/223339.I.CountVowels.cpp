// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I
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
int cnt = 0;

void count(int i)
{
    if (i >= s.size())
        return;

    char ch = tolower(s[i]);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cnt++;
    count(i + 1);
}

void program()
{
    getline(cin, s);
    count(0);
    cout << cnt << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}