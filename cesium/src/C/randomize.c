
void randomize_key(u32 k[N][N]) {
    for (u32 i = 0; i < N; i++) 
        for (u32 j = 0; j < N; j++)
            k[i][j] = arc4random_uniform(B);
}
void randomize_text(u32* t) {
	for (u32 i = 0; i < T; i++) t[i] = arc4random_uniform(B);
}