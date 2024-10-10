//to check the leap year using if else

//logic to check leap year : if the y is divisible by 4 and 400, then it is a leap year
//if the y is not divisible by 4 and 400, it is not  a leap year


#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"enter the year value: "<<endl;
    cin>>y;
    
    //checking using if else it is a leap year or not

    if(y%400){
        cout<<"it is a leap year!"<<endl;
    }
    else if(y%4){
        cout<<"it is a leap year!"<<endl;
    }else{
        cout<<"it is not a leap year!"<<endl;
    }
}