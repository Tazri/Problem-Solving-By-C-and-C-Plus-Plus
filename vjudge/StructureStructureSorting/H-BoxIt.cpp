#include <bits/stdc++.h>

using namespace std;

typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

typedef long long ll;
class Box
{
private:
    int l = 0;
    int b = 0;
    int h = 0;

public:
    Box() : l(0), b(0), h(0)
    {
    }

    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    int getLength()
    {
        return l;
    }

    int getBreadth()
    {
        return b;
    }

    int getHeight()
    {
        return h;
    }

    long long CalculateVolume()
    {
        return (long long)l * (long long)b * (long long)h;
    }

    bool operator<(Box right)
    {
        if (l == right.l)
        {
            if (b == right.b)
            {
                return h < right.h;
            }
            return b < right.b;
        }
        return l < right.l;
    }

    friend ostream &operator<<(ostream &os, const Box &b)
    {
        os << b.l << " " << b.b << " " << b.h;
        return os;
    }
};

void program()
{
    Box b(2, 3, 4);
    cout << b << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}