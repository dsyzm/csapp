#include<stdio.h>
#include<assert.h>

int odd_1s(unsigned x){
	// xor will conteract two 1
	//everytime xor half of x
	x ^= x >> 16;
	x ^= x >> 8;
	x ^= x >> 4;
	x ^= x >> 2;
	x ^= x >> 1;
	return x &= 0x1;
}

int main(){
	assert(odd_1s(0x11110));
	return 0;
}

