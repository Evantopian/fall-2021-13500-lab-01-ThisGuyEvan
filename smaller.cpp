#include <iostream>
using namespace std;

int main(){
    
    int n1, n2;

    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    cout << "The smaller of the two is ";

    if (n1 < n2){
        cout << n1;
    }
    else{
        cout << n2;
    }

    cout << endl;
    
}