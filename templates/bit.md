## Bit Template

### Xor of all numbers from 0 to n

```cpp
long long xor_till(long long n)
{
    long long r = n % 4;
    if (r == 0)
        return n;
    else if (r == 1)
        return 1;
    else if (r == 2)
        return n + 1;
    return 0;
}
// O(1) time complexity
```
