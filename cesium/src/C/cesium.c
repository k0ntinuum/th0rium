#include <raylib.h>
#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <inttypes.h>
typedef u_int32_t u32;
typedef u_int64_t u64;
const u32 N = 7;
const u32 T = 4;
const u32 B = 2;
char alph[] = "O| ";
int pixel_w = 101;
int pixel_h = 101;
//char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
#include"shuffle.c"
#include"randomize.c"
#include"key.c"
#include"print.c"


#include"encode.c"
//#include"encrypt.c"
#include"encryption_demo.c"
#include"demo.c"
#include"art.c"
#include"graphics.c"
#include"respond.c"
#include"animate.c"
	
int main() {
	animate();
	//encoding_demo();
	//demo();
	//art();
	//total_spin_demo();
}
