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
    queue<int> q;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string c;
        int v;
        cin >> c;

        if (c == "Enqueue")
        {
            cin >> v;
            q.push(v);
        }
        else
        {
            if (q.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                int v = q.front();
                cout << v << endl;
                q.pop();
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