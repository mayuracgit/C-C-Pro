#include<iostream>

using namespace std;

class Demo
{
    public:
        int x;      // Characteristics
        int y;      // Chaeracteristics

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
            x = ref.x;      // obj i ch dusra nav ref aahe    
                            //ha X obj2 cha aahe .line 28,29 la apan exact copy tayaar keli.
            y = ref.y;
        }

        ~Demo()     // Destructor
        {
            cout<<"Inside Destructor\n";
       }
};

int main()
{
    Demo obj1(11,21);  // yamule 1 object milel jo parameterised aahe tyat 11,21 milel

    Demo obj2(obj1);    //

    return 0;
}