#include <iostream>
#include <emscripten/emscripten.h>

#ifdef __cplusplus 
extern "C" {
#endif

// EMSCRIPTEN_KEEPALIVE added function to be exported
void EMSCRIPTEN_KEEPALIVE  myFunction(int argc, char ** argv) {
    printf("MyFunction Called\n");
}

int EMSCRIPTEN_KEEPALIVE square(int n) {
    return n*n;
}

const char* EMSCRIPTEN_KEEPALIVE instrument(int n) {
    switch(n){
        case 1:
            return "Piano";
        default:
            return "Violin";
    }
}

void EMSCRIPTEN_KEEPALIVE greeting(const char* name) {
    printf("Hello %s!\n" , name); 
}

#ifdef __cplusplus
}
#endif