// Kiran Biswa
// CIS 1202 102
// November 30, 2023
// Write templated functions to perform math on varying numeric data types.
// **************
// *** Part B ***
// **************

#include <iostream>
#include <iomanip>
using namespace std;

template <typename T>
T half(T &a) {
    if (std::is_floating_point<T>::value) {
            return a / 2;
    } else {
        return static_cast<T>(ceil(a / 2.0));
    }
}

int main() {
    double a = 7.0;
    float b = 5.0f;
    int c = 3;
    
    // displays the a which is a double
    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
    
    return 0;
}


