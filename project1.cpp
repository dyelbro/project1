#include <iostream>

using namespace std;

/* 
   This project determines how far an object would travel (in feet)
   in freefall after a given amount of time (in seconds)
*/

int main()
{
        cout << "PROJECT 1: FREFALL OBJECT\n";
        cout << "CS-1511, Fall 2017\n";

        // declarations
        double time;            // time object has been falling
        double distance;        // distance object has traveled

        // input
        cout << "Enter a time in seconds: ";
        cin >> time;

        // processing
        distance = ( 32 * (time * time) ) / 2;

        // output
        cout << "Distance traveled = " <<  distance << " feet\n";
        return 0;

}
