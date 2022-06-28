#include<stdio.h>
#include<assert.h>

int main(){
	size_t x = 0x89abcdef;
	size_t y = 0x76543210;
	size_t mask = 0xff;
	size_t res = (x & mask) | (y &~mask);
	printf("%x\n",res);
}
