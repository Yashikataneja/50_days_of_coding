#include<iostream>
using namespace std;
int main(){
    //break continue keyword implementation
    //here in this code, break keyword will break the for loop, initially
    //it was about to print the counting from 1 to 10 but due to this break keyword, it has stopped!
    for(int i=1;i<=10;i++){
        if(i==5)
        break;
        cout<<i<<" ";
    }
}