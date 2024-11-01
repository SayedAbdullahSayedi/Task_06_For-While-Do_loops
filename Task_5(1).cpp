#include <iostream>
using namespace std;

int main() {

     int Rows = 5;
     int Seats = 10; 

    for (int i = 1; i <= Rows; ++i) 
    {
        cout << "Row " << i << ": ";

        for (int j = 1; j <= Seats; ++j) {

            cout << "Seat-" << j << " ";
        }

        cout << endl;
    }

    return 0;
}
