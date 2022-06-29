#include<stdio.h>
#include<assert.h>
int any_odd_one(unsigned x){
	int num = 0xaaaaaaaa;
	return !!(x & num);
}
int main(int argc, char *argv[]){
	assert(any_odd_one(0xff));
	assert(any_odd_one(0x1));
	return 0;
}
