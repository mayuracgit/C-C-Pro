#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
};
class Hello : public Demo
{
    public:
        int x;
    private:
        int y;
    protected:
        int z;
     public:
        void fun()
        {
            cout<<k<<"\n";  // data jr protected asel tr to fakt derived class madhun acces hoil.
        }
};
int main()
{
    cout<<sizeof(Demo)<<"\n";
    cout<<sizeof(Hello)<<"\n";

     Demo dobj;
    cout<<dobj.i<<"\n";         // Allowed. to public aahe.
//    cout<<dobj.j;         // Not allowed. private aahe.
//    cout<<dobj.k;         // not allowed.main() he demo sathi outsider aahe.
    Hello hobj;
    cout<<hobj.x<<"\n";         // A
//    cout<<hobj.y;         // NA
//    cout<<hobj.z;         // NA

    cout<<hobj.i<<"\n";         // A
//    cout<<hobj.j;         // NA
//    cout<<hobj.k;         // Not allowed. karan apan to naked function madhun access kartoy.

    hobj.fun();

    return 0;
}


// demo class chi size 12 byte
// hello chi size 24 byte 