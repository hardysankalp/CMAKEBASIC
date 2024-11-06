#include <stdio.h>
#include <string.h>

void vulnerable_function() {
    char buffer[10];
    strcpy(buffer, "This is a buffer overflow example!");
}

int main() {
    vulnerable_function();
    return 0;
}