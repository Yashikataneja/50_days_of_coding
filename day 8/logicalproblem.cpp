//you are given a problem in which you have to take age input from user and you have to separate
//the candidates who are eligible for this job or not, you have to use loogical operator for this

//logical or will be used in this scenario 

#include <iostream>
using namespace std;
int main() {
int age;
cout << "Enter your age: ";
cin >> age;
if (age < 18 || age > 60) {
cout << "You are not eligible for this job.\n";
} else {
 cout << "You are eligible for this job.\n";
}
return 0;
}