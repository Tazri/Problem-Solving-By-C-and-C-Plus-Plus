## 🌳 Ordered Set (PBDS Magic) ✨

**_🪄 Summon the Template_**

```cpp
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace \_\_gnu_pbds;

template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
```

This is your **holy incantation** 🧙‍♂️. Copy → Paste → Profit. 🚀

---

### 🔍 `os.find_by_order(k)`

```cpp
os.find_by_order(k); // gives iterator
\*os.find_by_order(k); // gives actual value
```

- k starts from 0 (like arrays, not humans 🤓).
- Example: \*os.find_by_order(0) → smallest element.

### 📏 `os.order_of_key(x)`

```cpp
os.order_of_key(x); // how many elements < x
```

- Think of it as: “How many warriors are standing before number x?” ⚔️👑

---

### ❌ Erasing Stuff

```cpp
os.erase(value); // yeet by value
os.erase(os.find_by_order(k)); // yeet k-th element
```

- Careful: don’t erase something that doesn’t exist, or C++ will scream 😱.

### 📝 Notes to Self

- No duplicates! (it’s like `std::set` — one copy only 🥲).
- Want duplicates? Use `pair<value, id>` → hack it like a pro 🕶️.
- Change `less<T>` → `greater<T>` if you want descending order 🔄.
- All the cool functions (`insert`, `erase`, `find_by_order`, `order_of_key`) are **O(log n)** ⏱️.

---

### ⚡ Quick Example

```cpp
ordered_set<int> os;
os.insert(10);
os.insert(20);
os.insert(30);

cout << \*os.find_by_order(1); // 20
cout << os.order_of_key(25); // 2
```

<br />

---

## [⬅️ Back to README](./../README.md)
