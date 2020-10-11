//
//  main.c
//  axioms
//
//  Created by Christopher Gradwohl on 10/10/20.
//  Copyright © 2020 Christopher Gradwohl. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]){
    printf("%d\n", argc);
    int len = 0;
    for (int i = 0; i < argc; i++) {
        len++;
        printf("arg %d : %s\n", i, argv[i]);
    }

    printf("%d", len);
    return 0;
}
