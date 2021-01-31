#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
    double length, val, mult_value, sum;
    double geometric_mean, geo_mean, number;
    double mult_number;
    double power, power_two;
    int counter;

    cout<<"section a"<<endl;
    cout<<"Please enter the length of the sequence:";
    cin>>length;
    cout<<"Please enter your sequence:"<<endl;
    mult_value = 1;
    power = 1/ length;
    for(int count = 1; count <= length; count++){
        cin>>val;
        mult_value = mult_value * val;
    }
    geometric_mean = pow(mult_value, power);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);
    cout<<"The geometric mean is: "<<geometric_mean;
    cout<<endl;
    cout<<endl;
    cout<<"section b"<<endl;
    cout<<"Please enter a non-empty sequence of positive integers, each one in a separate line. "
          "End your sequence by typing -1:"<<endl;
    mult_number = 1;
    cin>>number;
    for(counter = 0; number != -1; counter++){
        mult_number = mult_number * number;
        cin>>number;
    }
    power_two = (1 / (double)counter);
    mult_number = mult_number * number * -1;
    geo_mean = pow(mult_number, power_two);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);
    cout<<"The geometric mean is: "<<geo_mean;
    return 0;
}
