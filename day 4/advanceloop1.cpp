//printing numbers form 101 to 200 using for loop

#include<iostream>
using namespace std;
int main(){
    //printing 101 to 200
    for(int i=100;i<=200;i++){
        cout<<i<<" ";
    }
}

//printing char from a to z using for loop

/* in this code, we will just slightly change the logic , in which we just change our datatype to char from int because w ehave to print the 
alphabets from a to z and also we will initialize it from a and the value of nth will be z and also, one more thing !!! yaha pe ascii values wala
concept use krenge hum jaha pe ascii value of char a se leke ascii values aage print hoti rahenge till z!!

that's all ! our question is sorted for today!*/

#include<iostream>
using namespace std;
int main(){

    char c='a';
    cout<<"the value of char c is : a"<<c<<endl;

    //printing a to z
    for(c='a';c<='z';c++){
        cout<<c<<" ";
    }
}