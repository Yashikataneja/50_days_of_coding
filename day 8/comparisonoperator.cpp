//comparison operator code

#include<iostream>
using namespace std;
int main()
{

    //comparison operators always return boolean values such as 0 and 1.
    //0 for false and true for 1.
    // the comparison operators are : >;<;==;<='>=;


    int a, b;
    cout<<"enter the values for a and b: "<<endl;
    cin>>a>>b;

    //checking a and b are equal, using if else statements

    if(a==b){
        cout<<"yes, a and b are equal!"<<endl;
    }else{
        cout<<"no, they are not equal."<<endl;
    }

    //checking a is greater than b or not.

    if(a>b){
        cout<<"yes."<<endl;
    }else{
        cout<<"no"<<endl;
    }

    //checking a is smaller than b or not using if else
    if(a<b){
        cout<<"yes";
    }else{
        cout<<"no";
   

    //checking a is less than equal to b or not
    if(a<=b){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }

    //checking a is greater than equal to b or not
    if(a>=b){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }

    //checking if a is not equal to b or not
    if(a!=b){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}