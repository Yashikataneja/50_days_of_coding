//floyd rectangle means we need to print only number pattern using for loop

#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows;
    cout<<"enter no. of rows: "<<endl;
    cin >> rows;
    int counter = 1; 
    for( int i = 0; i < rows; i++ ) {
        for( int j = 0; j <= i; j++ ){
            cout << (counter++) << " ";
        }
        cout << endl;
    }
    
    return 0;
}