// link : https://www.hackerrank.com/challenges/reduced-string/problem
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
    vector<char> stack;
    stack.reserve(s.size());

    for (char ch : s)
    {
        if (stack.empty())
            stack.push_back(ch);
        else
        {
            if (ch == stack.back())
                stack.pop_back();
            else
                stack.push_back(ch);
        }
    }

    if (stack.empty())
    {
        cout << "Empty String" << endl;
    }
    else
    {
        cout << stack[0];
        for (int i = 1; i < stack.size(); i++)
            cout << stack[i];
        cout << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}