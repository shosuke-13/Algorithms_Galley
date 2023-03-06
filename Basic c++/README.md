# C++ Basic syntax

***

### your first C++ code, Hello World!
```cpp
# include <iostream>

int main(){
    std::cout << "Hello World";
    return 0; 
}
```

***

1. Header
`#include` is declaration of loading header files.
header files can make the functions available.

2. namespace
`usin namespace std;` is declaration of using namespace.
only in C++, `cout` is defined this code.

3. cout & cin
`cout` can print variables in terminal. printf in C.
cout is object and standard input-output in terminal.
<<, >> means c++ input-output stream.

ex) `cout << "Hello, World!`
print "Hello, World" to output stream through cout object.

4. string (header)
`# include string`, you can use string.

table-1 : string operator
| operator |                 mean                      |
|:--------:|:------------------------------------------|
|     +    | Addition of strings                       |
|    +=    | Addition of strings (assignment operation)|
|    ==    | comparative operation (equal)             |
|    !=    | comparative operation (not equal)         |
|     >    | comparative operation                     |
|     <    |                                           |