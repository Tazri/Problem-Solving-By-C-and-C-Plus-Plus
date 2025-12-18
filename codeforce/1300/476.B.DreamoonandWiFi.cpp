// link : https://codeforces.com/problemset/problem/476/B
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
    cout.precision(15);           \
    cout.setf(ios::fixed, ios::floatfield)

string s1;
string s;
int n;
vector<int> v;
int value = 0;
void backTrack(int i)
{
    if (i >= n)
    {
        v.push_back(value);
        return;
    }

    if (s[i] != '?')
    {
        if (s[i] == '+')
            value++;
        else
            value--;
        backTrack(i + 1);
        if (s[i] == '+')
            value--;
        else
            value++;
        return;
    }

    value += 1;
    backTrack(i + 1);
    value -= 1;
    value -= 1;
    backTrack(i + 1);
    value += 1;
}

void program()
{
    int res = 0;
    cin >> s1 >> s;
    n = s1.size();

    for (char ch : s1)
        if (ch == '-')
            res--;
        else
            res++;

    backTrack(0);
    int cnt = 0;
    for (int vi : v)
    {
        if (vi == res)
            cnt++;
    }

    double ans = (double)cnt / (double)v.size();

    cout << ans << endl;
}

int main()
{
    optimize();
    fraction();
    program();
    return 0;
}