void art() {
    u32 delay = 0;
    u32 p = arc4random_uniform(B);
    u32 j = 0;
    u32 f[N][N] = {0};
    cls();
    hide_cursor();
    randomize_key(f);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    delay = 5000;
    for (u32 a = 0; a < 1000000 ; a++) {
        //cursor_to(2,0);
        //print_key(f);
        //auto_spin(f,i%N);
        //delay = arc4random_uniform(100) + 190000;
        j = a%N;
        p = arc4random_uniform(B);
	    for (u32 i = 0 ; i < N ; i++) {
            switch (trace(f)%2) {
                case 0 : shift_row(f, i,  1 + p + f[i][i]);break;
                case 1 : shift_col(f, i,  1+ p + f[i][i]);break;
            }
            print_key(f);
            usleep(delay);
        }
        // delay = 300000;
        // usleep(delay);
    }
    show_cursor();
	
}


void total_spin_demo() {
    u32 delay = 50000;
    u32 f[N][N] = {0};
    cls();
    hide_cursor();
    randomize_key(f);
    delay = 90000;
    for (u32 a = 0; a < 1000000 ; a++) {
	    for (u32 i = 0 ; i < N*N ; i++) {
            total_spin(f,i);
            print_key(f);
            usleep(delay);   
        }

    }
    show_cursor();
}