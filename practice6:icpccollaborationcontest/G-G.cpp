#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define PI 3.141592653589793
double r = 50.0;
double poridi = 2*PI*r;

double toDeg(double x){
    return (x*PI)/180.0;
}

double toMinus(double x,double y){
    if(x == y){
        return 0;
    }

    
    double segDeg = 45.0;
    double deg= (45.0 * abs(y-x) )/2.0;
    double ans = r*sin(toDeg(deg)) *2;
    return ans;
}

double toV(double x,double y){
    return 100.00;
}

double toXtoY(double x,double y){
    if(x == y){
        return 0.00;
    }

    double seg = poridi/8.0;

    if(x < y){
        double part =  y-x;
        double ans = seg*part;
        return ans;
    }

    double part = 8-(x-y);
    return seg*part;
}

void _DIBBA(int _DIBBA_NO)
{
    string s;
    cin >> s;

    double x = (int)s[0]-(int)'0';
    double y = (int)s[2]-(int)'0';

    if(s[1] == '-'){
        cout << toMinus(x,y) << endl;
    }else if(s[1] == '>'){
        cout << toXtoY(x,y) << endl;
    }else if(s[1] == '<'){
        cout << toXtoY(y,x) << endl;
    }else{
        cout << toV(x,y) << endl;
    }
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    fraction();
    int t = 1;
    cin >> t;
    for(int i = 1;i <= t;i++)
        _DIBBA(i);
    return 0;
}