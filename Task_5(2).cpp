#include <iostream>
using namespace std;

int main() {

    int Rows = 5;
    int Seats = 10; 
    int i = 1;

    while (i <= Rows) {
        cout << "Row " << i << ": ";

        int j = 1;
        while (j <= Seats) 
        {
            cout << "Seat-" << j << " ";
            ++j;
        }
        cout << endl;
        ++i;
    }
    return 0;
}
