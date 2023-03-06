#include <iostream>
#include <string>

using namespace std;

int main()
{   
  // define variables  
  string s,t;
  t = 'Input text is ';

  // print a message in terminal and receive input
  cout << "Enter a string: ";
  cin >> s;

  // output the result
  cout << t + s << endl;
  return 0;
}