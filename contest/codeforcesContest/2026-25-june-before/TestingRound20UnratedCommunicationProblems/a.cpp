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

void encode()
{
    int n;
    cin >> n;
    string s;
    s.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        ai--;
        s.push_back((char)((int)'a' + ai));
    }

    cout << s << endl;
}

void decode()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        v[i] = ((int)s[i] - (int)'a') + 1;

    cout << n << endl;
    for (int i = 0; i < n; i++)
        cout << v[i] << " \n"[i == n - 1];
}

int main()
{
    optimize();
    string s;
    cin >> s;
    if (s == "first")
        encode();
    else if (s == "second")
        decode();
    return 0;
}