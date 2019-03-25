// Gregory Sheets II
// Random Number Generator - Generates 20 random numbers.
//                           Then searches the array and displays the target value.

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes
void printArray(const int randomNumbers[], int size);

int arraySearch(const int randomNumbers[], int search, int size);

int main(int argc, char const *argv[]) {
    srand(time(NULL));
    int randomInteger;
    int randomNumbers[20];
    int size = 20;
    int search;
    
    for(size_t i = 0; i < 20; i++)
    {
        randomInteger = rand();
        randomNumbers[i] = randomInteger;
    }

    printArray(randomNumbers, size);

    cout << "Enter a target value: ";
    cin >> search;

    if(arraySearch(randomNumbers, search, size) >= 0) {
        cout << "Value " << search << " is located at position " << (arraySearch(randomNumbers, search, size) + 1) << endl;
    }
    if(arraySearch(randomNumbers, search, size) == -1) {
        cout << "Error: Number does not appear within the array." << endl;
    }
    return 0;
}// main

void printArray(const int randomNumbers[], int size) {
    for(int i = 0; i < size; i++) {
        cout << randomNumbers[i] << endl;
    }
}

int arraySearch(const int randomNumbers[], int search, int size) {
    for(int i = 0; i < size; i++) {
        if(randomNumbers[i] == search) {
            return i;
        }
    }
    return -1;
}