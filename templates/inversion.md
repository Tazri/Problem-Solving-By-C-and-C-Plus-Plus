# Inversion Count

```cpp
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// number of element greater than before v[i]
vector<int> countInversion(vector<int> &v)
{
    int n = v.size();
    vector<int> ans(n);

    ordered_set<pair<int, int>> mt;

    for (int i = 0; i < n; i++)
    {
        int total = i + 1;

        int less = mt.order_of_key({v[i], i}) + 1;
        ans[i] = total - less;

        mt.insert({v[i], i});
    }

    return ans;
}
```
