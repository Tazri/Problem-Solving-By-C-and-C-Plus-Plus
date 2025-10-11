// link : https://codeforces.com/problemset/problem/1970/A1
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
    string s;
    cin >> s;
    vector<int> pos(s.size());

    for (int i = 0; i < s.size(); i++)
        pos[i] = i;

    // prefix sum
    vector<int> prefix(s.size(), 0);
    prefix[0] = 0;
    int b = s[0] == '(' ? 1 : -1;

    for (int i = 1; i < s.size(); i++)
    {
        prefix[i] = b;
        if (s[i] == '(')
            b++;
        else
            b--;
    }

    // sort pos
    sort(pos.begin(), pos.end(), [&prefix](int ai, int bi)
         { 
            if (prefix[ai] != prefix[bi]) 
                return prefix[ai] < prefix[bi]; 

                return ai > bi; });

    // print string
    for (int i = 0; i < pos.size(); i++)
        cout << s[pos[i]];
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}