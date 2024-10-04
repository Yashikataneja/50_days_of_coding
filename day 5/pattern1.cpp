//normal square/rectangle pattern 

#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows, cols;
    cout<<"enter the no. of rows : "<<endl; //i
    cin >> rows;
    cout<<"ente rthe no. of cols: "<<endl; //j
    cin >> cols;
    for( int i = 0; i < rows; i++ ) {
        for( int j = 0; j < cols; j++ ){
            cout << "* ";
        }
        cout<<endl;
    }

    return 0;
}