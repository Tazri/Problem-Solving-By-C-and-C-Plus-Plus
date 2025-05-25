// link : https://basecamp.eolymp.com/en/problems/790
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
    multiset<pair<int, int>> queue;

    int command;
    cin >> command;
    while (command)
    {
        if (command == 1)
        {
            int k, p;
            cin >> k >> p;
            queue.insert({p, k});
        }
        else if (command == 2)
        {
            if (queue.size() == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                multiset<pair<int, int>>::iterator it = prev(queue.end());

                cout << it->second << endl;
                queue.erase(it);
            }
        }
        else if (command == 3)
        {
            if (queue.size() == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                multiset<pair<int, int>>::iterator it = queue.begin();

                cout << it->second << endl;
                queue.erase(it);
            }
        }

        cin >> command;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}