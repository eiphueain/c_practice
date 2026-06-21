#include <stdio.h>

int main(void) {
    int intNum = 12;
    int hexNum = 0x12;
    int oktNum = 012;
    printf("Formatted decimal to hexa: %x\n", intNum); // Typangepasst von dezimal nach hexa
    printf("size of hexadecimal: %lu\n", sizeof(hexNum));
    printf("size of octal: %lu\n", sizeof(oktNum));
    printf("size of decimal: %lu\n", sizeof(intNum));
    printf("Formatted decimal: %d\n", intNum); // dezimal print
    printf("Formatted hexa to decimal: %d\n", hexNum); // Typanpassung von hexa nach dezimal
    printf("Formatted hexa to oktal: %o\n", hexNum); // Typanpassung von hexa nach oktal
    printf("Formatted decimal to oktal: %o\n", intNum);
    printf("Formatted oktal to decimal: %d\n", oktNum);
    printf("\n");

    long int li = 12L;
    long long int lli = 12LL;
    long unsigned int lui = 12LU;
    printf("Unsigned decimal: %u\n", 12U);
    printf("Long int: %ld\n", 12L);
    printf("Size of long int: %lu\n", sizeof(li));
    printf("Long long int: %lld\n", 12LL);
    printf("Size of long long int: %lu\n", sizeof(lli));
    printf("Long unsigned int: %lu\n", 12LU);
    printf("Size of long unsigned int: %lu\n", sizeof(lui));
    return 0;
}



