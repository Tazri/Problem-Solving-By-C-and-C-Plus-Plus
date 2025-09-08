### Ordered Multiset

```cpp
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
```

### Erase Element

```cpp
if(os.upper_bound(x)!=os.end()) os.erase(os.upper_bound(x));
```
