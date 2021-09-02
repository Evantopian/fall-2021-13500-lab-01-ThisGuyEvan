#include <iostream>
using namespace std;

int main(){
    int year, month;
    bool leap;

    cout << "Enter a year: ";
    cin >> year;

    cout << "\nEnter numerical month: ";
    cin >> month;

    if ((year%4 == 0 || year%400 == 0) && year%100 != 0){
        leap = true;
    }

    if (month == 2){
        if (leap){
            cout << "\nThere are 29 days.\n";
        }
        else{
            cout << "\nThere are 28 days.\n";
        }    
    }
    else{
        if (month%2 != 0){
            cout << "There are 31 days.";
        }
        else{
            cout << "There are 30 days.";
        }
    }
    cout << endl;
}