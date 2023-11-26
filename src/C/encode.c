void copy_key(u32 d[N][N],u32 s[N][N]) {
    for (u32 i = 0; i < N; i++) for (u32 j = 0; j < N; j++) d[i][j] = s[i][j];
}
void encode(u32 c[T], u32 p[T], u32 k[N][N]) {
	for (u32 i = 0 ; i < T ; i++) {
		c[i] = ( trace(k) + p[i] )%B;
		spin_key(k, trace(k), c[i] + p[i]);
	}
}
void decode(u32 d[T],  u32 c[T], u32 k[N][N]) {
	for (u32 i = 0 ; i < T ; i++) {
		d[i] = (N*B + c[i] - trace(k))%B;
		spin_key(k, trace(k), c[i] + d[i]);
	}
}
void reverse(u32 t[T]) {
    u32 temp[T];
    for (u32 i = 0; i < T; i++) temp[i] = t[i];
    for (u32 i = 0; i < T; i++) t[i] = temp[T - 1 - i];
}

void encrypt(u32 c[T], u32 p[T], u32 k[N][N]) {
	u32 f[N][N] = {0};
	u32 u[T] = {0};
	u32 v[T] = {0};
	copy_text(v,p);
	for (u32 r = 0 ; r < N ; r++) {
		copy_key(f,k);
		auto_spin(f,r);
		copy_text(u,v);
		encode(v,u,f);
		reverse(v);
	}
	copy_text(c,v);
}
void decrypt(u32 d[T], u32 c[T], u32 k[N][N]) {
	u32 f[N][N] = {0};
	u32 u[T] = {0};
	u32 v[T] = {0};
	copy_text(v,c);
	for (u32 r = 0 ; r < N ; r++) {
		copy_key(f,k);
		auto_spin(f, N - 1 - r);
		copy_text(u,v);
		reverse(u);
		decode(v,u,f);	
	}
	copy_text(d,v);
}


