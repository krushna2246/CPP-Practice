#include <iostream>
using namespace std;
class ClassB
{
    int pin;

public:
    ClassB()
    {
        cin>>pin;
    }
    ClassB(ClassB &obj1)
    {
        pin = obj1.pin;
    }
};
int main()
{
    ClassB obj1;
    ClassB obj2(obj1); // Copy constructor is called here
    return 0;
}
