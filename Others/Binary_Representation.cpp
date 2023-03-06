# include <iostream>
# include <cmath>

using namespace std;

int N;

int main(){
    /*
    整数Nを2進数で表す

    [input format]
    N

    [output format]
    Binary 10-digit
    */

   // input
    cin >> N;

    for (int i=  9; i >= 0; i--){
        int temp = std::pow(2, i);
        cout << (N / temp) / 2;
    }
     // output
    cout << endl;
    return 0;

}