#include <stdio.h>
#include <string.h>

void Greeting(char *name);

int main(void) {

    char name[] = "山田太郎";

    Greeting(name);
    return 0;
}

void Greeting(char *name) {
    printf("%sさんこんにちは\n", name);
}