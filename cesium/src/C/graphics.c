


Color color_from(int i) {
    int h; 
    switch (i) {
        case 0 : return (Color){.r = 0, .g = 0, .b = 0, .a = 255};break;
        case 1 : return (Color){.r = 255, .g = 255, .b = 255, .a = 255};break;
        case 2 : h =  arc4random_uniform(255);return (Color){.r = h, .g = h, .b = 0, .a = 255};break;
        default : return (Color){.r = 255, .g = 255, .b = 255, .a = 255};break;
    }
}

void plot_key(u32 f[N][N]) {
    for (int r = 0; r < N ; r++) {
        for (int c = 0 ; c < N ; c++ ) {
            DrawRectangle( c*pixel_w, r*pixel_h, pixel_w,  pixel_h, color_from(f[r][c]));
        }
    }
        
}