# C++  
<img src="https://raw.githubusercontent.com/isocpp/logos/master/cpp_logo.png" width="200ptx"><br>

&nbsp;
## What is C++?
・a cross-platform language and was developed by Bjarne Stroustrup, as an extension to the C language.<br>
・C++ gives programmers a high level of control over system resources and memory.<br>
・one of the world's most popular programming languages.<br>
・an object-oriented programming language like python, which gives a clear structure to programs and allows code to be reused.<br>
・C++ was developed as an extension of C, and both languages have almost the same syntax.<br>
・The main difference between C and C++ is that C++ support classes and objects, while C does not.<br>

&nbsp;
## Computers and Compilers
C++ is low-level language. Using C++, you can get these skills.

・Efficient memory managementn<br>
・Pointers<br>
・Compile & Compiler<br>
・Optimization your code<br>
・Static programming<br>
...      

&nbsp;
## Features of C++
<img src="https://d1m75rqqgidzqn.cloudfront.net/wp-data/2022/05/20134453/Features-of-C-Language-1024x576.png" width="750ptx"><br>
*C++ vs Java | 20 Key Differences between C++ and Java in 2023 (https://www.mygreatlearning.com/blog/cpp-vs-java/)*

***
  
&nbsp; 
## Get started with C++
```cpp
# include <iostream>
using namespace std;

int main(){
    // print "Hello World!"
    cout << "Hello World!" << endl;

    //if you don't declare namespace, write this
    //std::cout << "Hello World" << std::endl;

    return 0; 
}
```    

&nbsp;
`#include <iostream>` is a header file library. A header file imports features into your program. <br>
We’re basically asking that the program copy the content from a file called <iostream>. <br>
This stands for input and output stream, and it defines the standards for the objects in our code.<br>

using namespace std means that we are using object and variable names from the standard library (std). <br>
This statement is often abbreviated with the keyword std and the operator ::. The int main ( ) is used to specify the main function.<br>

It is a very important part of C++ programs. A function essentially defines an action for your code. <br>
Anything within the curly brackets { } will be executed.<br>

cout is an object (pronounced see - out). In this example, it defines our outputs: the strings of words. <br>
We write a new object using cout on the second line. The character \n makes the text execute on a different line.<br>
endl means a blank line. By writing return 0, we are telling the program that nothing will return. We are only outputting strings of text. <br>
Note that we use the << operator to name our objects. The semi colon ; functions like a period.<br>

***
