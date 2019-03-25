// Gregory Sheets II
// Random Number Generator - Generates 20 random numbers.
//                           Then searches the array and displays the target value.

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {
    int randomInteger;
    srand(time(NULL));
    for(size_t i = 0; i < 20; i++)
    {
        randomInteger = rand();
        cout << randomInteger << endl;
    }
    return 0;
}// main
