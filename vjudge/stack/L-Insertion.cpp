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

void print(char c, int t)
{
    for (int i = 0; i < t; i++)
        cout << c;
}
void program()
{
    int n;
    cin >> n;
    int stk = 0;
    int left = 0;
    string s;
    cin >> s;

    for (char ch : s)
    {
        if (ch == ')')
        {
            if (stk <= 0)
            {
                left++;
            }
            else
            {
                stk--;
            }
        }
        else
        {
            stk++;
        }
    }

    print('(', left);
    cout << s;
    print(')', stk);
    cout << endl;
}

int main()
{
    optimize();
    program();

    return 0;
}