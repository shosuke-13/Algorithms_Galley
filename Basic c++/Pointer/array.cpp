# include <stdio.h>

int main(){
    int array[10];
    int *p;

    // integer pointer variable p points to array[0]
    p = array;

    // assign value to array[0] (equal to array[i] = i)
    for (int i = 1; i <= 10; i++) p[i] = i;
    
    // print array
    for (int i = 1; i <= 10; i++) printf("%d", array[i]);
    return 0;
}