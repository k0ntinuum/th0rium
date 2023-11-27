void rgb(int r, int g, int b) {
    printf("\x1b[38;2;%d;%d;%dm",r,g,b);
}
void cls() {
    printf( "\x1b[2J");
}
void reverse_text() {
    printf("\x1b[7m");
}
void stop_reverse_text() {
    printf("\x1b[27m");
}
void hide_cursor() {
    printf("\x1b[?25l");
}
void show_cursor() {
    printf("\x1b[?25h");
}

void cursor_to(int r, int c) {
    printf("\x1b[%d;%dH",r,c);
}

// void print_symbol(u32 i) {
//     u32 h = arc4random_uniform(155) + 100;
//     u32 l = arc4random_uniform(255);
//     //u32 h = 255;
//     u32 g = arc4random_uniform(60);
//     //rgb(arc4random_uniform(255),arc4random_uniform(255),arc4random_uniform(255) );
//     //rgb(h,h,h);
//     rgb(0,h,0);
//     //rgb(h,0,0);
//     if (g == 0 ) reverse_text();
//     switch (i) {
//         case 0 : rgb(l,l,l);printf("O");break;
//         case 1 : rgb(l,l,l);printf("|");break;
//         case 2 : rgb(l,l,l);printf(" ");break;
//         case 3 : printf("\u2593");break;
//         case 4 : printf("\u2591");break;
//         // case 4 : printf("4");break;
//         // case 5 : printf("5");break;
//         // case 6 : printf("6");break;
//         // case 7 : printf("7");break;
//         // case 8 : printf("8");break;
//         // case 9 : printf("9");break;
//         //case 9 : printf("\u2594");break;

//         //case 2 : printf("\u2594");break;    
//     }
//     if (g == 0 ) stop_reverse_text();
// }
    // switch (i) {
    //     case 0 : printf("O");break;
    //     case 1 : printf("|");break;
    //     case 2 : printf("2");break;
    //     default : printf("\u2591");break;
    // }

void print_symbol(u32 i) {
    u32 g = arc4random_uniform(60);
    u32 h = arc4random_uniform(255);
    //u32 h = 255;
    //rgb(h,h,h);
    rgb(0,h,0);
    //if (g == 0 ) reverse_text();
    if (i < 26 ) printf("%c", alph[i]);
    else printf(" ");
    //else printf("\u2588");
    //if (g == 0 ) stop_reverse_text();
}
void print_key(const u32 k[N][N]) {
	for (u32 i = 0; i < N; i++) {
		for (u32 j = 0; j < N; j++) {
            cursor_to(i + 2, 2*j + 5); 
            print_symbol(k[i][j]);printf("\n");}
        //"\u2588\u2588"); //"\u2591\u2591"
		//printf("\n");
	}
    //printf("\n");
}

void print_vec(u32* v, u32 l) {
	for (u32 j = 0; j < l; j++) printf("%d ", v[j]);
    printf("\n");
}
void print_text(u32 t[T]) {
	for (u32 i = 0; i < T; i++) print_symbol(t[i]);
}

	