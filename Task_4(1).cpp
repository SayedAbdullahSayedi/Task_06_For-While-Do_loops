#include <iostream>
using namespace std;

int main() {

    int Number_of_weeks = 3;
    int Days_of_week = 7;

    for (int Week = 1; Week <= Number_of_weeks; Week++) 
    {
        cout << "Week " << Week << ":";

        for (int Day = 1; Day <= Days_of_week; Day++) 
        {
            cout << "  Day " << Day;
        }

        cout << endl;
    }
    return 0;
}
