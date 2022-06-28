#include<stdio.h>

unsigned replace_byte_shift(unsigned x, int i,char b){
      if(i < 0){
      printf("error: i is negtive\n");
      return x;
      }
      if(i > sizeof(unsigned)){
	      printf("errot: too big i");
	      return x;
      }
      unsigned mask = 0xff << (i<<3); // left shift 3 bits means  *2*2*2
      unsigned pos_byte = (unsigned) b << 3*8;
      return x&~mask | pos_byte;
}
unsigned replace_byte_vector(unsigned x, int i, char b){
	unsigned char *bp = (unsigned char*) &x;
	bp[i] = b;
	return x;
}

int main(int argc, char *argv[]){
	unsigned rep_3 = replace_byte_vector( 0x12345678, 3, 0xab);
	printf("%x\n",rep_3);
	return 0;
}


