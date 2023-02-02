#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;

        virtual void fun()
        {
            cout<<"Base fun"<<"\n";
        }
         void gun()
        {
            cout<<"Base gun"<<"\n";
        }
};
class Derived : public Base
{
    public:
        int i,j;
        void sun()
        {
            cout<<"Derived sun"<<"\n";
        }
        void fun()
        {
            cout<<"Derived fun"<<"\n";
        }
};
int main()
{
    Base *bp = new Derived();   // Upcasting
    bp->fun();
    bp->gun();
    //bp->sun();        // Not allowed

    cout<<"Size of Base : "<<sizeof(Base)<<"\n";        // 8
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";  // 16

    return 0;
}
// line no 9. Base cass madhe fun() virtual aahe.  bp->fun(); asa call kelyavr. control aadhe base madhe jail. tithe te function virtual aahe ka he check hoil.
// virtual asla tr control Derived madhe jail. tithe non virtual asla tr derived madhl fun() call hoil.
// virtual function aslayamule first 8 byte pointer sathi astil tuale class chi size 8 byte ne increase hoil.

//output asa rahil

/*
Derived fun
Base gun
Size of Base : 16
Size of Derived : 24
*/

// vitrul3.cpp madhe output asa hot
/*
Base fun
Base gun
Size of Base : 8
Size of Derived : 16
*/