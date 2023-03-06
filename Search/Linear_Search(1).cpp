# include <iostream>

using namespace std;

int N,X,A[100];
bool Answer = false;

int main()
{
    /* 
    N個の整数A1,A2,A3,...,Anの中に、整数Xが含まれるかどうかを判定
    
    [input format]
    N X
    A1 A2 A3 ... AN

    [output format]
    contains X : print "Yes"
    else : print "No"
    */

    // input
    cin >> N >> X;
    for (int i = 1; i <= N; i++) cin >> A[i];

    // search
    for (int i = 1; i <= N; i++) {
        if (A[i] == X) { Answer = true;}
    }

    // output result
    if (Answer == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}