//you have to input a grade from user and on the basis of that grade, you have to print 
//whether the student is pass or fail, or status of student  using switch case statements


#include <iostream>
using namespace std;
 
int main () {
   // local variable declaration:
   char grade;
   cin>>grade;

   switch(grade) {
      case 'A' :
         cout << "Excellent!" << endl; 
         break;
      case 'B' :
      case 'C' :
         cout << "Well done" << endl;
         break;
      case 'D' :
         cout << "You passed" << endl;
         break;
      case 'F' :
         cout << "Better try again" << endl;
         break;
      default :
         cout << "Invalid grade" << endl;
   }
   cout << "Your grade is " << grade << endl;
 
   return 0;
}