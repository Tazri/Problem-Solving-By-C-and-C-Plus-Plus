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
    string t, u;

    cin >> t;
    cin >> u;

    for (int i = 0; i <= t.size(); i++)
    {
        if (t[i] == '?' || t[i] == u[0])
        {
            bool isMatch = true;

            for (int j = 0; j < u.size(); j++)
            {
                int index = i + j;

                if (index >= t.size())
                {
                    isMatch = false;
                    break;
                }

                if (t[index] == u[j])
                    continue;

                if (t[index] == '?')
                    continue;

                isMatch = false;
                break;
            }

            if (isMatch)
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }

    cout << "No" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}