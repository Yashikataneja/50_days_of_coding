//printing weekdays with number using is else

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your choice: "<<endl;
    cin>>n;
    //checking if it is mon, tues, and so on by their inputs !!!
    if(n==1){
        cout<<"today is monday!"<<endl;
    }
    else if(n==2){
        cout<<"today is tuesday!"<<endl;
    }
    else if(n==3){
        cout<<"today is wednesday!"<<endl;
    }
    else if(n==4){
        cout<<"today is thursday!"<<endl;
    }
    else if(n==5){
        cout<<"today is friday!"<<endl;
    }
    else if(n==6){
        cout<<"today is saturday!"<<endl;
    }
    else if(n==7){
        cout<<"today is sunday!"<<endl;
    }else{
        cout<<"no week day !!!!"<<endl;
    }
}