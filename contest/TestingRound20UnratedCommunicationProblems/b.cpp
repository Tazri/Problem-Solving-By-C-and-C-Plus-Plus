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

string numberIncode(int n)
{
    int base = 25;
    string s;

    while (n)
    {
        int m = n % base;
        n /= base;

        char ch = (char)((int)'a' + m);
        s.push_back(ch);
    }

    return s;
}

int numberDecode(string s)
{
    int w = 1;
    int base = 25;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int v = (int)s[i] - (int)'a';
        v *= w;
        w *= base;
        ans += v;
    }

    return ans;
}

void first()
{
    int n;
    cin >> n;

    string s;
    s.reserve(1e4 * 9);

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        string ns = numberIncode(ai);
        for (char ch : ns)
            s.push_back(ch);
        s.push_back('z');
    }

    cout << s << endl;
}

void second()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> v;
    v.reserve(n);

    string num = "";

    for (char ch : s)
    {
        if (ch != 'z')
        {
            num.push_back(ch);
            continue;
        }

        int vi = numberDecode(num);
        v.push_back(vi);
        num.clear();
    }

    if (num.size())
    {
        int vi = numberDecode(num);
        v.push_back(vi);
    }

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " \n"[i == v.size() - 1];
}

int main()
{
    optimize();
    string s;
    cin >> s;
    if (s == "first")
        first();
    if (s == "second")
        second();
    return 0;
}