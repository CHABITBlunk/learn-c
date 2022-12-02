#include <stdio.h>

int main() {
    int mob = 5;
    int *mobPointer = &mob;
    printf("%d\n", mob);
    printf("%p\n", mobPointer);
    return 0;
}

