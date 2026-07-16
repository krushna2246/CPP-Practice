#include <iostream>
using namespace std;
class Time
{
    int hour;
    int minute;
    int second;
    int day = 0;

public:
    void set_hour(int hr)
    {
        hour = hr;
    }
    void set_minute(int min)
    {
        minute = min;
    }
    void set_second(int sec)
    {
        second = sec;
    }

    void add(Time pt[])
    {
        // for (int i = 0; i < 2; i++)
        // {
        //     cout<<"Addition"<<endl;
        //     pt[0].hour += pt[i].hour;
        //     pt[0].minute += pt[i].minute;
        //     pt[0].second += pt[i].second;
        // }

        pt[2].hour = pt[0].hour + pt[1].hour;
        pt[2].minute = pt[0].minute + pt[1].minute;
        pt[2].second = pt[0].second + pt[1].second;
        if (pt[2].second >= 60)
        {
            pt[2].minute += pt[2].second / 60;
            pt[2].second %= 60;

            if (pt[2].minute > 60)
            {
                pt[2].hour += pt[2].minute / 60;
                pt[2].minute %= 60;
                if (pt[2].hour > 24)
                {
                    pt[2].day += pt[2].hour / 24;
                    pt[2].hour %= 24;
                }
            }
        }

        else if (pt[2].minute > 60)
        {
            pt[2].hour += pt[2].minute / 60;
            pt[2].minute %= 60;
            if (pt[2].hour > 24)
            {
                pt[2].day += pt[2].hour / 24;
                pt[2].hour %= 24;
            }
        }
        else
        {
            pt[2].day += pt[2].hour / 24;
            pt[2].hour %= 24;
        }
    }
    void display(Time pt[])
    {

        cout << "Final ans" << endl
             << "Day :" << pt[2].day << endl
             << "Hour :" << pt[2].hour << endl
             << "Minute :" << pt[2].minute << endl
             << "Second :" << pt[2].second << endl;
    }
};
int main()
{
    Time t1[3];
    Time obj;

    int hr, min, sec;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter Time for day: " << i + 1 << endl;
        cout << "enter the Hour: ";
        cin >> hr;
        cout << "enter the Minute: ";
        cin >> min;
        cout << "enter the Second: ";
        cin >> sec;
        t1[i].set_hour(hr);
        t1[i].set_minute(min);
        t1[i].set_second(sec);
    }
    obj.add(t1);

    obj.display(t1);
}