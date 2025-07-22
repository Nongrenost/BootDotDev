#include <assert.h>
#include <stdio.h>
#include "l1_header.h"

void test_size_of_addr_16() {
    unsigned long size = size_of_addr(16);
    assert(size == 4 && "size_of_addr(16) should return 4");
    printf("Passed: size_of_addr(16)\n");
}

void test_size_of_addr_32() {
    unsigned long size = size_of_addr(32);
    assert(size == 4 && "size_of_addr(32) should return 4");
    printf("Passed: size_of_addr(32)\n");
}

void test_size_of_addr_64() {
    unsigned long size = size_of_addr(64);
    assert(size == 4 && "size_of_addr(64) should return 4");
    printf("Passed: size_of_addr(64)\n");
}

void test_size_of_addr_128() {
    unsigned long size = size_of_addr(128);
    assert(size == 4 && "size_of_addr(128) should return 4");
    printf("Passed: size_of_addr(128)\n");
}

int main() {
    test_size_of_addr_16();
    test_size_of_addr_32();
    test_size_of_addr_64();
    test_size_of_addr_128();

    printf("All tests passed.\n");
    return 0;
}
