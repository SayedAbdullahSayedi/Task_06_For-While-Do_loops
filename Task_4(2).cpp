#include <iostream>
using namespace std;

int main() {

    int Number_of_weeks = 3;
    int Week = 1;

    while (Week <= Number_of_weeks) {

        cout << "Week " << Week << ": ";

        int Day = 1;
        
        while (Day <= 7) 
        {
            cout << "  Day  " << Day;
            ++Day;
        }
        
        cout << endl;
        ++Week;
    }
    return 0;
}
