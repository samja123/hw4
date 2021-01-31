#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int decimal_number_mod, decimal_number, store;
    long long binary_number;
    int counter;
    cout<<"Enter decimal number:"<<endl;
    cin>>decimal_number;
    store = decimal_number;
    binary_number = 0;
    for(counter = 0; decimal_number > 0; counter++){
        decimal_number_mod = decimal_number % 2;
        decimal_number = decimal_number / 2;
        if(decimal_number_mod > 0){
            binary_number = binary_number + pow(10, counter);
        }
    }
    cout<<"The binary representation of "<<store<<" is "<<binary_number<<endl;
    return 0;
}
