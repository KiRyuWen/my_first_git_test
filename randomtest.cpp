#include <iostream>
using namespace std;

typedef enum days
{
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
} days;

inline days operator++(days &d, int)
{
    cout << "hello world\n";
    return static_cast<days>((static_cast<int>(d) + 1) % 7);
}

inline days operator++(days &d)
{
    return static_cast<days>((static_cast<int>(d) + 1) % 7);
}

int main(int argc, const char *argv[])
{
    days currentDay = WED;
    days newDay = currentDay++;
    cout << "Current day: " << currentDay << ", New day: " << newDay++ << endl;
    days twoDay = ++newDay;
    cout << "Current day: " << currentDay << ", New day: " << twoDay << endl;
    system("pause");
}