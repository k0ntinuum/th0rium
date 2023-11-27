
void demo() {
    u32 f[N][N] = {0};
    cls();
    hide_cursor();
    randomize_key(f);
    printf("\n\n\n\n");
    for (u32 i = 0; i < 1000000 ; i++) {
        cursor_to(2,0);
        print_key(f);
        //usleep(50000);
    }
    show_cursor();
	
}