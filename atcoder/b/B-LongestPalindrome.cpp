// link : https://atcoder.jp/contests/abc320/tasks/abc320_b?lang=en
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

    int ans = 1;
    for (int i = 0; i < s.size(); i++)
    {
        int j = s.size() - 1;

        while (i <= j)
        {
            if (s[i] == s[j])
            {
                int l = i;
                int r = j;
                bool isPalindrome = true;
                while (l <= r)
                {
                    if (s[l] == s[r])
                    {
                        l++;
                        r--;
                    }
                    else
                    {
                        isPalindrome = false;
                        break;
                    }
                }

                if (isPalindrome)
                {
                    int len = j - i + 1;
                    ans = max(len, ans);
                }
            }

            j--;
        }

        if (i == j)
            continue;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}