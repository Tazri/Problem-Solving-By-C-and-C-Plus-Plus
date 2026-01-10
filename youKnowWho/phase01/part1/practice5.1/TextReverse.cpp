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
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<string> words;
    string w;
    while (ss >> w)
    {
        reverse(w.begin(), w.end());
        words.push_back(w);
    }

    for (int i = 0; i < words.size(); i++)
        cout << words[i] << " \n"[i == words.size() - 1];
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
        program();
    return 0;
}