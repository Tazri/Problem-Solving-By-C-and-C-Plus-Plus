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
    int n;
    string s;
    cin >> n;
    cin >> s;
    map<string, int> mp;
    int mx = 0;
    string ans = "";

    for (int i = 1; i < s.size(); i++)
    {
        string gram = {s[i - 1], s[i]};

        mp[gram]++;

        if (mp[gram] > mx)
        {
            ans = gram;
            mx = mp[gram];
        }
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}