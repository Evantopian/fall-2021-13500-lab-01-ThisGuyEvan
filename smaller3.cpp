#include <iostream>
using namespace std;

int main(){

    int num, min;

    for (int i = 0; i < 3; i++){
        
        cout << i+1 << ") Enter a number: ";
        cin >> num;

        if (min > num){
            min = num;
        }
        cout << "\n";
    }

    cout << "The smaller number is: " << min << endl;
}