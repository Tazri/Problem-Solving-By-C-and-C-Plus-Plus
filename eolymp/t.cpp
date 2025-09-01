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
}

int main()
{
    optimize();
    program();
    return 0;
}

/*
 3
cnt = 0
ans = 1+1
1 0 1 0 0 0 1 1 0 0 0 1 0 0 0 1 0 0

3
cnt = 15, 3+1 = 4
ans +=

-2 -4 5 6 -7 8 1  1 -2 4
-6 11 -7 10 -2 4

5 -4 1 -1 1 -1 2 -1
 15 1 1 1 3 1 3 1 1 1

 ans += (cnt / (k+1)) // + 3
 if(cnt % (k+1) == k)
 ans++
*/