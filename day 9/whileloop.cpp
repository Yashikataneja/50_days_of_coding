//to find factors of a number by using while loop

#include<iostream>
using namespace std;
int main(){
    //while loop
    int i=1;int n;
    cin>>n;
    cout<<"the factors of the n are : "<<endl;

    while(i<=n){
        if(n%i==0){
            cout<<i<<" ";
        }
        i++;
    }

    
    
}