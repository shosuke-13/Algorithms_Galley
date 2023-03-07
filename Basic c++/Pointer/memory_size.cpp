# include <stdio.h>

int main(){
    // data type
    char c;
    int i;
    float f;
    double d;
    
    // print memory size
    printf("char c %d byte¥n"
           "int i %d byte¥n"
           "float f %d byte¥n"
           "double d %d byte¥n",
           sizeof(c), sizeof(i), sizeof(f), sizeof(d));

    // pointer : get address
    printf("char c %p¥n"
           "int i %p¥n"
           "float f %p¥n"
           "double d %p¥n",
           &c, &i, &f, &d);
}