#include<stdio.h>
#include<assert.h>

int shifts_are_arithmetic(){
	int test_num = -1;
	return  !~(test_num >> ((sizeof(int) << 3) -1));
}

int main(){
	printf("%d\n",shifts_are_arithmetic());
	return 0;
}
