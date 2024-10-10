#include<iostream>
using namespace std;
int main(){
    //logical operators

    //checking if the given name is a vowel or a consonant by using or || operator

    char name;
    cin>>name;
    

    //checking through or condition
    if(name=='a'||name=='e'||name=='i'||name=='o'||name=='u'){
        cout<<" given char is a vowel."<<endl;
    }else{
        cout<<"given char is a consonant!"<<endl;
    }



}