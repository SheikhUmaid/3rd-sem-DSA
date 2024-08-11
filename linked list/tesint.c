#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    printf("Size of Node: %lu bytes\n", sizeof(struct Node));
    return 0;
}