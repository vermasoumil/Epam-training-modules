//Fixed memory leaks
#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>

int main() {
    std::cout << "Hello World!\n";

    // Memory allocation using malloc and freeing memory
    int* x = (int*)malloc(sizeof(int));
    *x = 7;
    printf("%d\n", *x);
    free(x); // Free memory to prevent leak

    // Memory allocation using calloc and freeing memory
    x = (int*)calloc(3, sizeof(int));
    x[0] = 7;
    x[1] = 77;
    x[2] = 777;
    printf("%d %d %d\n", x[0], x[1], x[2]);
    free(x); // Free memory to prevent leak

    _CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG);
    _CrtDumpMemoryLeaks();

    return 0;
}
