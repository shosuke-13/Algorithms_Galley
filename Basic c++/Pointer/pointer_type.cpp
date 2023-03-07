# include <stdio.h>

int main()
{   // declare variables
    int a, b;
    int *p, *q; // pointer type variable
    
    printf("&a == %p, &b == %p, &p == %p, &q == %p\n", &a, &b, &p, &q);
    
    // assign value to pointer
    p = &a;
    q = &b;
    *p = 3;
    *q = *p + 2;

    printf(" a == %d,  b == %d,  p == %p,  q == %p\n", a, b, p, q);
    return 0;
}
