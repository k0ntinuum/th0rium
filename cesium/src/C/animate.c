void animate() {
    u32 f[N][N] = {0};
    u32 c = 0;
    u32 p = 0;
    cls();
    hide_cursor();
    randomize_key(f);
	InitWindow(N*pixel_w, N*pixel_h, "cesium");
    //SetTargetFPS(20);             
    while (!WindowShouldClose())  {
        respond();
        BeginDrawing();
        plot_key(f);
        
        EndDrawing();
        f[5][5] = !f[5][5];
        p = arc4random_uniform(B);
		c = ( trace(f) + p ) % B ;
        spin_key(f, trace(f), c );
        usleep(90000);
		
	}
    CloseWindow();
}