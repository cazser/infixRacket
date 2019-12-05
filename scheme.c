#include <stdlib.h>
#include<stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    object *exp;

    printf("Welcome to Bootstrap Scheme."
            "Use ctrl-c to exit.\n");
    
    init();

    while(1){
        printf("> ");
        exp = read(stdin);
        if(exp == NULL){
            break;
        }
        write(stdout, eval(exp, the_global_environment));
        printf("\n");
    }

    printf("Goodbye\n");

    return 0;
}
/*
错误提示可以成为我们的朋友，当错误提示消失时程序就完成了。
*/
