#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int addNums(int a, int b){
    return a + b;
}

EMSCRIPTEN_KEEPALIVE
int subNums(int a,int b){
    return a-b;
}

EMSCRIPTEN_KEEPALIVE
int main(void){
    printf("welcome to wrapping function%d \n ",addNums(10,20));
 return 0;   
}