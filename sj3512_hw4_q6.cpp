#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
    int n, num;
    int counter, remainder;
    int even_counter, odd_counter;
    cout<<"Please enter a positive integer: ";
    cin>>num;

    for(counter = 1; counter <= num; counter++) {
        n = counter;
        even_counter = 0;
        odd_counter = 0;
        while(n != 0){
            remainder = n % 10;
            if((remainder % 2) == 1){
                odd_counter++;
            }
            else{
                even_counter++;
            }
            n = n / 10;
            }
        if(even_counter > odd_counter){
            cout<<counter<<endl;
        }
        
    }
    
    return 0;
}
