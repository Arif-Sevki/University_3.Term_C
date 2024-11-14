#include <stdio.h>
int cube(int a){
    return a*a*a;
}
int square(int a){
    return a*a;
}

int main(){
    int (*map1)(int) = cube;
    printf("%d\n", map1(3));
    map1 = square;
    printf("%d\n", map1(3));


    typedef int (*Map)(int);
    Map map2 = cube;
    printf("%d\n", map2(5));
    map2= square;
    printf("%d\n", map2(5)); 
    return 0;

}