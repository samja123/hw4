#include <iostream>
#include <cmath>
#include <string>
const int THOUSANDS_VAL= 1000;
const int FIVE_HUNDREDS_VAL= 500;
const int HUNDREDS_VAL= 100;
const int FIFTIES_VAL= 50;
const int TENS_VAL= 10;
const int FIVES_VAL = 5;
const int ONES_VAL= 1;
using namespace std;
int main() {
    int decimal_number;
    int counter, current_val;
    int thousands_count, five_hundreds_count, hundreds_count, fifties_count, tens_count, fives_count, ones_count;
    cout<<"Enter a decimal number:"<<endl;
    cin>>decimal_number;
    for(counter = 0; counter < 1; counter++){
        cout<<decimal_number<<" is ";
        // print a sequence of Ms
        for(thousands_count = 0; thousands_count < decimal_number / THOUSANDS_VAL; thousands_count++) {
            cout<<"M";
        }
        current_val = decimal_number - (thousands_count * THOUSANDS_VAL);
        // print a sequence of D
        for(five_hundreds_count = 0; five_hundreds_count < current_val / FIVE_HUNDREDS_VAL; five_hundreds_count++) {
            cout<<"D";
        }
        current_val = current_val - (five_hundreds_count * FIVE_HUNDREDS_VAL);
        // print a sequence of C
        for(hundreds_count = 0; hundreds_count < current_val / HUNDREDS_VAL; hundreds_count++){
            cout<<"C";
        }
        current_val = current_val - (hundreds_count * HUNDREDS_VAL);
        // print a sequence of L
        for(fifties_count = 0; fifties_count < current_val / FIFTIES_VAL; fifties_count++){
            cout<<"L";
        }
        current_val = current_val - (fifties_count * FIFTIES_VAL);
        // print a sequence of X
        for(tens_count = 0; tens_count < current_val / TENS_VAL; tens_count++){
            cout<<"X";
        }
        current_val = current_val - (tens_count * TENS_VAL);
        // print a sequence of V
        for(fives_count = 0; fives_count < current_val / FIVES_VAL; fives_count++){
            cout<<"V";
        }
        current_val = current_val - (fives_count * FIVES_VAL);
        // print a sequence of I
        for(ones_count = 0; ones_count < current_val / ONES_VAL; ones_count++){
            cout<<"I";
        }

        cout<<endl;
    }
    return 0;
}
