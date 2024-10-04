//pyramid pattern using for loop


#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    cout << "Pyramid pattern is\n";
    m = n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m-1; j++) {
           cout<< " ";
        }
        for(int k=1; k<=2*i-1; k++) {
            cout << "*";
        }
        m--;
        cout << endl;
    }
    return 0;
}