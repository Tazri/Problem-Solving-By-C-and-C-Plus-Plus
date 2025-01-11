// link : https://codeforces.com/problemset/problem/1860/A
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

void test()
{
    string s;
    cin >> s;

    if (s == "()")
    {
        cout << "NO" << endl;
        return;
    }

    int size = s.size();
    string pattern1 = ""; // ()()()...
    string pattern2 = ""; // ((((....))))

    for (int i = 0; i < size; i++)
    {
        pattern1 += "()";
    }

    for (int i = 0; i < size; i++)
    {
        pattern2 += "(";
    }
    for (int i = 0; i < size; i++)
    {
        pattern2 += ")";
    }

    cout << "YES" << endl;
    if (pattern1.find(s) != string::npos)
    {
        cout << pattern2 << endl;
    }
    else
    {
        cout << pattern1 << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}