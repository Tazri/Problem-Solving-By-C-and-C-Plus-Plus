// link : https://cses.fi/problemset/task/1144
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

template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void program()
{
    int n, q;
    cin >> n >> q;
    vector<int> s(n + 1);
    ordered_multiset<int> os;

    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        os.insert(s[i]);
    }

    while (q--)
    {
        char ch;
        cin >> ch;

        if (ch == '!')
        { // change
            int k, x;
            cin >> k >> x;

            int rm = s[k];

            if (os.upper_bound(rm) != os.end())
                os.erase(os.upper_bound(rm));

            os.insert(x);
            s[k] = x;
            continue;
        }

        int a, b;
        cin >> a >> b;

        int leftCount = os.order_of_key(a);
        int rightCount = os.order_of_key(b + 1);

        cout << rightCount - leftCount << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}