#include <iostream>
#include <unordered_map>

std::unordered_map<void*, size_t> memoryMap;

void* allocateMemory(size_t size) {
    void* ptr = malloc(size);
    memoryMap[ptr] = size;
    return ptr;
}

void freeMemory(void* ptr) {
    if (memoryMap.find(ptr) != memoryMap.end()) {
        free(ptr);
        std::cout << "Freed " << memoryMap[ptr] << " bytes at " << ptr << std::endl;
        memoryMap.erase(ptr);
    }
}

int main() {
    void* ptr1 = allocateMemory(100);
    void* ptr2 = allocateMemory(50);

    freeMemory(ptr1);
    freeMemory(ptr2);

    return 0;
}
