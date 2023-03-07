# include <iostream>
# include "example.h"

using namespace std;

int main(){
    // make instance
    example obj;
    int num;

    // receive input number
    cout << "Enter a number: " << endl;
    cin >> num;

    // use set and get method
    obj.set(num);
    cout << "The number is: " << obj.get() << endl;

    return 0;
}