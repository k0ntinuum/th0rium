u32 trace(u32 h[N][N]) {
	u32 s = 0;
	for (u32 i = 0; i < N; i++) s += h[i][i];
	return s;
}

void spin(u32 h[N][N], u32 d, u32 a) {
	for (u32 i = 0 ; i < N ; i++) {
		switch ((i + d)% 2) {
			case 0 : shift_row(h, i, h[i][i] + a + 1);break;
			case 1 : shift_col(h, i, h[i][i] + a + 1);break;
		}
	}
}
void auto_spin(u32 h[N][N], u32 j) {
	for (u32 i = 0 ; i < N ; i++) {
        switch (h[i][j]%2) {
            case 0 : shift_row(h, i, h[j][i] + 1);break;
            case 1 : shift_col(h, i, h[j][i] + 1);break;
        }
	}
}

void reverse(u32 t[T]) {
    u32 temp[T] = {0};
    for (u32 i = 0; i < T; i++) temp[T-i-1] = t[i];
    for (u32 i = 0; i < T; i++) t[i] = temp[i];
}

void encode() {
	reset_g();
	for (u32 i = 0 ; i < T ; i++) {
		c[i] = ( trace(g) + p[i] )%B;
		spin(g, trace(g), c[i] + p[i]);
	}
    reverse(c);
}
void decode() {
	reset_g();
    reverse(c);
	for (u32 i = 0 ; i < T ; i++) {
		d[i] = (N*B + c[i] - trace(g))%B;
		spin(g, trace(g), c[i] + d[i]);
	}
}