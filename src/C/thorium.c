#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>
typedef u_int32_t u32;
const u32 N = 16;
const u32 T = 32;
const u32 B = 2;
char alph[] = "O|";
#include"shuffle.c"
#include"randomize.c"
#include"key.c"
#include"print.c"
#include"encode.c"
#include"encryption_demo.c"
#include"demo.c"
	
int main() {
	encoding_demo();
	//demo();

}
