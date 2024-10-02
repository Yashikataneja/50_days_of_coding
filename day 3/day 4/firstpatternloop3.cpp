//program to print half pyramid using for loop (simple)
#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}

//to print inverted(reverse) pattern  using for loop
#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
//bs ismein hum reverse krdenge jaise decrement or greater than value instead of lesser than !! tabhi reverse hoega poora
//pattern 
    for(int i = rows; i >= 1; --i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
