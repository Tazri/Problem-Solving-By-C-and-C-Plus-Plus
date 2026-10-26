#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
int n;
// int x = 83;
// int bse = 8;



int query(int d){
    cout << "? " << d << endl;
    int res;
    cin >> res;
    return res;
}

// int fcnt(int n,int b){
//     int cnt = 0;

//     while(n){
//         cnt++;
//         n/=b;
//     }

//     return cnt;
// }

// int query(int d){
//     int newX = x + d;
//     int digitCount = fcnt(newX,bse);

//     return digitCount;
// }

int find(int n, int d,int l = 1,int rpow = 40){
    int r= (ll)l + (1LL<<rpow);
    int ans = -1;

    while(l <= r){
        int mid = l + (r-l)/2;

        int res = query(mid);

        if(res >= n+d){
            ans = mid;
            r = mid-1;
        }else{
            l= mid+1;
        }
    }

    return ans;
}

ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    
    int f1 = find(n,1);
    int f2 = find(n,2,f1+1,60);
    
    
    f2 = f2-f1;

    for(int bse = 1;bse <= 2023;bse++){
        int a = binpow(bse,n+1);
        int b = binpow(bse,n);
        int d = a-b;

        if(f2 == d){
            int x = b - f1;

            cout << "! " << x << " " <<bse << endl;
            break;
        }
    }

}

int32_t main()
{

    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++)
        _DIBBA(i);
    return 0;
}