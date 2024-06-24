#include <stdio.h>

int main() {
    // Write C code here
unsigned int x=0x989898;
unsigned int maj=x>>13;
unsigned int min=x&0x1fff;
printf("%x\n",maj);
printf("%x",min);
    return 0;
}
