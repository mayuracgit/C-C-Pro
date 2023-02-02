#include<iostream>
using namespace std;

void CallValue(int no)
{
    no++;
}

void CallAddress(int *p)
{
    (*p)++;
}

void CallReference(int &ref)
{
    ref++;
}

int main()
{
    int a = 10, b = 10, c = 10;

    CallValue(a); // CallValue(10); passing parameter.
    cout<<a<<"\n";

    CallAddress(&b); // CallAddress(200); passing address. ghenara pointer madhe gheil.
    cout<<b<<"\n";

    CallReference(c);  // CallReference(c); nav pathvtoy. ghemara topam nav madhe gheil.
    cout<<c<<"\n";

    return 0;
}