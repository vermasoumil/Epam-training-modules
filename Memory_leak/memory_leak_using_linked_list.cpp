#include<iostream>

struct MemoryNode {
    void* address;
    size_t size;
    MemoryNode* next;
};

MemoryNode* head = nullptr;

void trackMemory(void* ptr, size_t size) {
    MemoryNode* node = new MemoryNode{ptr, size, head};
    head = node;
}

void freeAllMemory() {
    while (head) {
        MemoryNode* temp = head;
        free(temp->address);
        std::cout << "Memory Freed: " << temp->address << std::endl;
        head = head->next;
        delete temp;
    }
}

int main() {
    int* arr = (int*)malloc(10 * sizeof(int));
    trackMemory(arr, 10 * sizeof(int));
    
    freeAllMemory(); // Clean up memory and prevent leaks
    return 0;
}


// struct Node {
//     int data;
//     Node* next;
// };

// // void createLinkedList() {
// //     Node* head = new Node{1, nullptr};
// //     head->next = new Node{2, nullptr};
// //     head->next->next = new Node{3, nullptr};
// //     std::cout << "Linked List created!" << std::endl;
// //     // Memory leak will happen because no delete is performed
// // }

// void createLinkedList() {
//     Node* head = new Node{1, nullptr};
//     head->next = new Node{2, nullptr};
//     head->next->next = new Node{3, nullptr};
//     std::cout << "Linked List created!" << std::endl;

//     // Free memory to avoid memory leaks //if will delete according to temp position

//     Node* current = head;
//     while (current) {
//         Node* temp = current;
//         current = current->next;
//         delete temp;
//     }
//     std::cout << "Linked List deleted!" << std::endl;
// }


// int main() {
//     createLinkedList();
//     std::cout << "memory_leak_challenge!" << std::endl;
//     return 0;
// }


