//printing cubes from 1 to 5


#include<iostream>
using namespace std;
int main(){
    //printing numbers from 1 to 5 using for loop
    int n;
    cout<<"enter value of n: "<<endl;
    cin>>n;
    //loop
    for(int i=0;i<=n;i++){
        cout<<i*i*i<<endl;
    }
}