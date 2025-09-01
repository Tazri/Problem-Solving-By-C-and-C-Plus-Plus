// link : https://www.spoj.com/problems/NPC2014F/en/
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

bool check(vector<int> mp, vector<int> req)
{
    for (int i = (int)'a'; i <= (int)'z'; i++)
    {
        if (mp[i] < req[i])
            return false;
    }

    return true;
}

void program()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int k;
    cin >> k;

    vector<int> rq((int)'z' + 1, 0);
    vector<int> mp((int)'z' + 1, 0);

    for (int i = 0; i < k; i++)
    {
        int t;
        char ch;
        cin >> t >> ch;
        rq[ch] = t;
    }

    int ans = -1;

    int l = 0, r = 0;

    while (r < n)
    {
        mp[s[r]]++;

        // check requirement fill up
        if (check(mp, rq) == false)
        {
            r++;
            continue;
        }

        while (check(mp, rq))
        {
            mp[s[l]]--;
            int len = r - l + 1;

            if (ans == -1)
                ans = len;
            else
                ans = min(ans, len);

            l++;
        }
        r++;
    }

    if (ans == -1)
        cout << "Andy rapopo" << endl;
    else
        cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}