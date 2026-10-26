// link : https://codeforces.com/problemset/problem/1698/D
#include <bits/stdc++.h>

using namespace std;

bool query(int l,int r){
    cout << "? " << l << " " << r << endl;
    int n = r-l+1;

    int cnt = 0;
    for(int i = l;i <=r;i++){
        int vi;
        cin >> vi;
        if(l <= vi && vi <= r){
            cnt++;
        }
    }

    return cnt & 1;
}


void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    int l = 1;
    int r = n;
    int fixedR  = n;
    int cnt = 0;
    while(l<= r){
        int mid = l + (r-l)/2;
        int res = query(1,mid);

        if(res & 1){
            fixedR = mid;
            cnt = res;
            r = mid-1;
        }else{
            l = mid+1;
        }
    }

    cout <<"! "<< fixedR << endl;

}

int32_t main()
{

    int t = 1;
    cin >> t;
    for(int i = 1;i <= t;i++)
        _DIBBA(i);
    return 0;
}