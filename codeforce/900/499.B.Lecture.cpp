// link : https://codeforces.com/problemset/problem/499/B
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

void program()
{
    int n, k;
    cin >> n >> k;

    map<string, string> mp;

    for (int i = 0; i < k; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }

    vector<string> words;
    words.reserve(n);

    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;

        string b = mp[a];

        if (a.size() == b.size())
            words.push_back(a);
        else if (a.size() < b.size())
            words.push_back(a);
        else
            words.push_back(b);
    }

    for (int i = 0; i < n; i++)
        cout << words[i] << " \n"[i == n - 1];
}

int main()
{
    optimize();
    program();
    return 0;
}