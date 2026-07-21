#include <iostream>
#include <string.h>
using namespace std;
class ClassA
{
    int pin;

public:
    int meth1(int in)
    {
        int num=in;
        int count=0;
        while(num>0){
            num/=10;
            count++;
        }
        if (count==4 && in < 10000)
        {
            this->pin = in;
        }
        else
        {
            cout << "Enter the valid PIN" << endl;
            return 0;
        }
        return pin;
    }
};
int main()
{
    int password;
    int set_pin;
    ClassA obj;

    // obj.age; compile time error
    cout << "Enter the pin" << endl;
    cin >> password;
    set_pin = obj.meth1(password);
    cout << "Your Pin is now " << set_pin << endl;
}