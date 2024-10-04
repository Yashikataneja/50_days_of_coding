//pattern to print hollow rectangle using for loop 

#include<bits/stdc++.h>

using namespace std;

int main() {

  int rows, cols;
  cout<<"enter the number of rows: "<<endl;
  cin >> rows;
  cout<<"enter the no. of cols: "<<endl;
  cin >> cols;

  //looping of i and j to print hollow rectangle 

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
        cout << "* ";
      else
        cout << "  ";
    }
    cout << endl;
  }

  return 0;
}