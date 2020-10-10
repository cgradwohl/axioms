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
    for (int i = 0; i < argc; i++) {
        printf("arg %d : %s\n", i, argv[i]);
    }
    return 0;
}
