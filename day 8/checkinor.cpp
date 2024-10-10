#include<iostream>
using namespace std;
int main(){

    //checking given char a is greater than b;c;d;e;f through logical operator && 
    //ismein hum && use krenge bcz humne sabka check krna hai b; c; d; e ; f ka

    char  a;
    char  b;
    char d;
    char e;
    char f;
    char c;

    cin>>a>>b>>c>>d>>e>>f;


    //chekcing

    if(a>b&&a>c&&a>d&&a>e&&a>f){
        cout<<"a is greater than all."<<endl;
    }else{
        cout<<"a is lesser "<<endl;
    }
    
}