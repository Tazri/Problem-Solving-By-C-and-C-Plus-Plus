// link : https://atcoder.jp/contests/abc320/tasks/abc320_c?lang=en
// TODO
// not solve yet

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

bool search(string s, char ch)
{
    for (char c : s)
    {
        if (c == ch)
            return true;
    }

    return false;
}

string s1, s2, s3;
string digits = "0123456789";

void program()
{
    int m;
    cin >> m;
    cin >> s1 >> s2 >> s3;
    vector<char> allowedDigits;

    for (char d : digits)
        if (search(s1, d) && search(s2, d) && search(s3, d))
            allowedDigits.push_back(d);

    if (allowedDigits.size() <= 0)
    {
        cout << -1 << endl;
        return;
    }

    s1 = s1 + s1 + s1;
    s2 = s2 + s2 + s2;
    s3 = s3 + s3 + s3;
    int ans = -1;

    for (char d : allowedDigits)
    {

        int mx = 0;

        bool r1 = false, r2 = false, r3 = false;
        int r1r2r3 = 0;
        int r1r2 = 0;
        int r1r3 = 0;
        int r2r3 = 0;

        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == d && s2[i] == d && s3[i] == d)
            {
                r1r2r3++;
                if (r1r2r3 >= 3)
                {
                    r1 = true;
                    r2 = true;
                    r3 = true;
                }
            }
            else if (s1[i] == d && s2[i] == d)
            {
                r1r2++;

                if (r1r2 >= 2)
                {
                    r1 = true;
                    r2 = true;
                }
            }
            else if (s1[i] == d && s3[i] == d)
            {
                r1r3++;

                if (r1r3 >= 2)
                {
                    r1 = true;
                    r3 = true;
                }
            }
            else if (s2[i] == d && s3[i] == d)
            {
                r2r3++;

                if (r2r3 >= 2)
                {
                    r2 = true;
                    r3 = true;
                }
            }
            else if (s1[i] == d)
            {
                r1 = true;

                if (r1r2)
                    r2 = true;
                if (r1r3)
                    r3 = true;
            }
            else if (s2[i] == d)
            {
                r2 = true;
                if (r1r2)
                    r1 = true;
                if (r2r3)
                    r3 = true;
            }
            else if (s3[i] == d)
            {
                r3 = true;
                if (r2r3)
                    r2 = true;
                if (r1r3)
                    r1 = true;
            }

            if (r1r2r3 == 1)
            {
                if (r1 && r2)
                    r3 = true;
                if (r1 && r3)
                    r2 = true;
                if (r2 && r3)
                    r1 = true;
            }

            if (r1r2r3 == 2)
            {
                if (r1)
                {
                    r2 = true;
                    r3 = true;
                }

                if (r2)
                {
                    r1 = true;
                    r3 = true;
                }

                if (r3)
                {
                    r1 = true;
                    r2 = true;
                }
            }

            if (r1r2r3)
            {
                if (r1r3 && r2r3)
                {
                    r1 = true;
                    r2 = true;
                    r3 = true;
                }

                if (r2r3 && r1r2)
                {
                    r1 = true;
                    r2 = true;
                    r3 = true;
                }

                if (r1r2 && r1r3)
                {
                    r1 = true;
                    r2 = true;
                    r3 = true;
                }
            }

            if (r1r2 && r2r3 && r1r3)
            {
                r1 = true;
                r2 = true;
                r3 = true;
            }

            if (r1 && r2 && r3)
            {
                mx = i;
                break;
            }
        }

        if (ans < 0)
            ans = mx;
        else
            ans = min(ans, mx);
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();

    return 0;
}
