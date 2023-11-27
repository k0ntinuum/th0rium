package main
import "slices"


func (T *Thorium) encrypt(p []int) []int {
	c := p
	for i := 0; i < 1; i++ {
		T.spin(i)
		c = T.encode(c)
		slices.Reverse(c)
	}
	return c
}

func (T *Thorium) decrypt(c []int) []int {
	p := c
	for i := 0; i < 1; i++ {
		T.spin(N - 1 - i)
		slices.Reverse(p)
		p = T.decode(p)
		
	}
	return p
}

func (T *Thorium) spin(c int) {
	T.soft_key = T.hard_key
	for i := 0 ; i < N ; i++ {
		if trace(T.soft_key)%2 == 0 { 
			T.spin_row(i, T.soft_key[i][i] + 1 ) 
		} else {  
			T.spin_col(i, T.soft_key[i][i] + 1 )  
		}
	}
}
