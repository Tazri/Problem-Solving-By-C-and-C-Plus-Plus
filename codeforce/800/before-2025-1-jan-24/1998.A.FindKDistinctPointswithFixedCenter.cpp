// link : https://codeforces.com/problemset/problem/1998/A
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void test(){
    int x,y;
    int k;
    cin >> x >> y >> k;
    
    if(k == 1){
        cout << (x*k) << " " << (y*k)<< endl;
        return;
    }
    
    int half =  k /2;
    
    for(int i = 1;i <= half;i++){
        cout << x+i << " " << y+i << endl;
    }
    for(int i = 1;i <= half;i++){
        cout << x-i << " " << y-i << endl;
    }
    
    if(k&1){
        cout << x << " " << y << endl;
    }
}


int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        test();
    }
    return 0;
}