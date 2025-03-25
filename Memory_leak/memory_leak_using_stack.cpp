#include <iostream>
#include <stack>

std::stack<void*> memoryStack;

void* allocate(size_t size) {
    void* ptr = malloc(size);
    memoryStack.push(ptr);
    return ptr;
}

void freeAll() {
    while (!memoryStack.empty()) {
        void* ptr = memoryStack.top();
        free(ptr);
        std::cout << "Freed memory at: " << ptr << std::endl;
        memoryStack.pop();
    }
}

int main() {
    void* ptr1 = allocate(100);
    void* ptr2 = allocate(200);

    freeAll(); // Free all memory in reverse order
    return 0;
}
