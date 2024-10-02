//printing all even numbers starting from 0 till 20 using for loop

#include<iostream>
using namespace std;
int main(){
    //printing numbers from 1 to 5 using for loop
    int n;
    cout<<"enter value of n: "<<endl;
    cin>>n;
    //loop
    for(int i=2;i<=n;i=i+2){
        cout<<i<<endl;
    }
}