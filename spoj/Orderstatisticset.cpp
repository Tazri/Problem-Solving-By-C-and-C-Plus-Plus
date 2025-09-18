// link : https://www.spoj.com/problems/ORDERSET/en/
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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void program()
{
    ordered_set<int> os;
    int q;
    cin >> q;

    while (q--)
    {
        char ch;
        int x;
        cin >> ch >> x;

        if (ch == 'I')
            os.insert(x);
        else if (ch == 'D')
        {
            if (os.find(x) != os.end())
                os.erase(x);
        }
        else if (ch == 'K')
        {
            if (os.size() < x)
            {
                cout << "invalid" << endl;
            }
            else
            {
                cout << *os.find_by_order(x - 1) << endl;
            }
        }
        else
        {
            cout << os.order_of_key(x) << endl;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}