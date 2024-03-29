#include<iostream>

using namespace std;

class Demo
{
    public:
        int x;      // Characteristics
        int y;      // Chaeracteristics. //object chi size 8 byte (4+4) asel
                    
        Demo()      // Default constructor
        {
            cout<<"Inside Default constructor\n";
            x = 0;
            y = 0;
        }

        Demo(int i, int j)  // Parametrised constructor
        {
            cout<<"Inside Parametrised constructor\n";
            x = i;
            y = j;
        }

        Demo(Demo  &ref)    // Copy constructor
        {
            cout<<"Inside copy constructor\n";
        }

        ~Demo()     // Destructor
        {
            cout<<"Inside Destructor\n";
       }
};

int main()
{
    Demo obj1(11,21);   // ithe parameterized constructor call hoil.
    Demo obj2(51,101);

    cout<<sizeof(obj1)<<"\n";
    cout<<sizeof(obj2)<<"\n";

    cout<<"Value of x in obj1 : "<<obj1.x<<"\n";    //  11
    cout<<"Value of x in obj2 : "<<obj2.x<<"\n";    //      51

    obj1.x++;

    cout<<"Value of x in obj1 : "<<obj1.x<<"\n";    //  12
    cout<<"Value of x in obj2 : "<<obj2.x<<"\n";    //      51

    return 0;
}

//constructor and destructor should be  public so they can be accessed by compiler
//constructor is use to initialize characteristics and resources.
//resource allocation mhanjech - ex. dynamic memory allocation (new) when our program needs.