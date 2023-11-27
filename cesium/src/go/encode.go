package main


func (t *Thorium) encode(p []int) []int {
	//t.soft_key = t.hard_key
	c := make([]int, len(p))
	for i := range p {
		c[i] = (trace(t.soft_key) + p[i] ) % B 
		if p[i]%2 == 0 { 
			t.spin_row(i%N, t.soft_key[i%N][i%N] + p[i] + 1)
		} else {
			t.spin_col(i%N, t.soft_key[i%N][i%N] + p[i] + 1)
		}
	}
	return c
}
func (t *Thorium) decode(c []int) []int {
	//t.soft_key = t.hard_key
	p := make([]int, len(c))
	for i := range p {
		p[i] = (c[i] - trace(t.soft_key) + N*B ) % B 
		if p[i]%2 == 0 { 
			t.spin_row(i%N, t.soft_key[i%N][i%N] + p[i] + 1)
		} else {
			t.spin_col(i%N, t.soft_key[i%N][i%N] + p[i]+ 1)
		}
	}
	return p
}
