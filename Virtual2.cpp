#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;
};

class Deried : public Base
{
    public:
        int i,j;
};

int main()
{
    Base *bp = new Base();      // No casting. pointer ponting to same class. 
    Deried *dp = new Deried();  // No casting

    Base *bp1 = new Deried();   // Upcasting
    // Deried *dp1 = new Base();   // Downcasting

    return 0;
}

//downassting is not allowed. 
//pointer pointing karnyachi capacity 8 byte ani jo data point hotoy to pn 8 byte so no castiong
//pointer pointing karnyachi capacity 16 byte ani jo data point hotoy to pn 8 byte so downcastiong. Not allowed
//pointer pointing karnyachi capacity 8 byte ani jo data point hotoy to pn 16 byte so upcastiong
