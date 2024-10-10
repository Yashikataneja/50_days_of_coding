#include<iostream>
using namespace std;
int main(){

    //printing numbers from 1 to n using do while loop

    //do while loop ek bar execute jroor krta h, then condition check krta hai execute krne ke baad

    //yeh while se aLAG HAI KYUKI WHILE PEJLE CONDITION CHECK KRTA H THEN EXECUTE KRTA H

    int i=1;
    int n;
    cin>>n;

    //do while loop

    do{
        cout<<i<<" ";
        i++;
    }while(i<=n);
}