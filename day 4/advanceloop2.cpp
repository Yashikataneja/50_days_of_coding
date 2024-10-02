//printing numbers in reverse order using for loop : 

#include<iostream>
using namespace std;
int main(){
    //reverse order

    /* logic : we will decrement in this because we have to reverse the counting and also, we will use 
    lesser than operator instead of greater than!!!*/
    int n;
    cout<<"value of n is: "<<endl;
    cin>>n;


    for(int i=n;i>=0;i--){
        cout<<i<<" ";
    }
}