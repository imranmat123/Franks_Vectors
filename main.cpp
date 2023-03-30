#include <iostream>
#include <vector>
using namespace std;
int main() {

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----

    vector <int> vec {10, 20, 30, 40, 50};

    cout << "At index 0: " << vec.at(0) << endl;
    cout << "At index 1: " << vec.at(1) << endl;
    cout << "At index 2: " << vec.at(2) << endl;
    cout << "At index 3: " << vec.at(3) << endl;
    cout << "At index 4: " << vec.at(4) << endl;


    vec.at(0) = 100;
    vec.at(0) = 100;

    cout << "\nAt index 0: " << vec.at(0) << endl;
    cout << "At index 1: " << vec.at(1) << endl;
    cout << "At index 2: " << vec.at(2) << endl;
    cout << "At index 3: " << vec.at(3) << endl;
    cout << "At index 4: " << vec.at(4) << endl;


    //-----WRITE YOUR ABOVE THIS LINE----
    //-----DO NOT CHANGE THE CODE BELOW THIS LINE----
    return 0;
}
