#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <inttypes.h>
typedef u_int32_t u32;
typedef u_int64_t u64;
const u32 N = 9;
const u32 T = 34;
const u32 B = 27;
//char alph[] = "O| ";
char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
#include"shuffle.c"
#include"randomize.c"
#include"key.c"
#include"print.c"
//#include"matrix.c"
#include"encode.c"
//#include"encrypt.c"
#include"encryption_demo.c"
#include"demo.c"
#include"art.c"
	
int main() {
	//encoding_demo();
	//demo();
	//art();
	total_spin_demo();

}
