#include <stdio.h>

void increment(int *p){

    *p = *p + 1;
}

int main(void){
    int i = 10;
    int *j = &i;
    printf("j is %p\n", (void*)j);
    printf("i is %d\n", i);
    printf("i is also %d\n", *j);
    increment(j);
    printf("i is now %d\n", *j);
    printf("################ sizeof operator on pointers ################");
    int *p;
    printf("size of an int: %zu\n", sizeof(int));
    printf("p is type 'int *', so print size of 'int*', *p: %zu\n", sizeof p);
    printf("*p is type 'int', so prints size of 'int': %zu\n", sizeof *p);
}
