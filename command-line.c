#include <stdio.h>

// take in argc and argv
int main(int argc, char* argv[]) {

    // print number of args
    printf("there are %i command line arguments\n", argc);

    // print arguments
    for (int i = 0; i < argc; i++) {
        printf("argv[%i] is %s\n", i, argv[i]);
    }
}
