```cpp
// int limit
INT32_MAX // 2147483647
INT32_MIN // -2147483648
LLONG_MAX // 9223372036854775807
LLONG_MIN // -9223372036854775808

UINT_MAX // 4294967295

// floating point
DBL_MAX // maximum double
DBL_MIN // minimum positive double
const double EPS = 1e-9;

// pi
acos(-1.0) // π
const double PI = acos(-1.0);

// infinity
const int INF = 1e18; // if int = long long
const int INF32 = 1e9;
numeric_limits<int>::max();
numeric_limits<long long>::max();

// **int128 bit
**int128 x;
unsigned \_\_int128 y;

// bit built in
**builtin_popcount(x); // int
**builtin_popcountll(x); // long long
**builtin_clz(x); // leading zeros
**builtin_ctz(x); // trailing zeros
\_\_builtin_parity(x); // parity

// bit
(1LL << k)
x & (-x) // lowest set bit
\_\_lg(x) // floor(log2(x))

// gcd and lcm
gcd(a,b); // C++17
lcm(a,b);

// priority_queue
priority_queue<int> pq; // min
priority_queue<int,vector<int>,greater<int>> pq; // max

// random
mt19937 rng(
chrono::steady_clock::now()
.time_since_epoch().count()
);
int L = 1, R = 100;
uniform_int_distribution<int> dist(L, R);
cout << dist(rng) << '\n';

// String Conversion
stoi(s);
stoll(s);
to_string(x);

// log

log(x); // ln(x)
log10(x);
__lg(x); // floor(log2(x))

// positive modulo
((x % mod) + mod) % mod
```
