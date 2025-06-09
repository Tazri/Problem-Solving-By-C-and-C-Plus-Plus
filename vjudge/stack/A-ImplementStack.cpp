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
    vector<int> stck;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string c;
        int v;
        cin >> c;

        if (c == "push")
        {
            cin >> v;
            stck.push_back(v);
        }
        else if (c == "pop")
        {

            if (stck.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << stck.back() << endl;
                stck.pop_back();
            }
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}