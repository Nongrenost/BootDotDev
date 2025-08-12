#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "l6_exercise.h" // contains swap() declaration

typedef struct CoffeeShop {
    uint64_t quality;
    uint64_t taste;
    uint64_t branding;
} coffee_shop_t;

static void test_generic_ints(void) {
    int i1 = 1234;
    int i2 = 5678;

    swap(&i1, &i2, sizeof(int));

    assert(i1 == 5678);
    assert(i2 == 1234);
}

static void test_generic_strings(void) {
    char *s1 = "dax";
    char *s2 = "adam";

    swap(&s1, &s2, sizeof(char *));

    assert(strcmp(s1, "adam") == 0);
    assert(strcmp(s2, "dax") == 0);
}

static void test_generic_structs(void) {
    coffee_shop_t sbucks       = {2, 3, 4};
    coffee_shop_t terminalshop = {10, 10, 10};

    swap(&sbucks, &terminalshop, sizeof(coffee_shop_t));

    assert(sbucks.quality == 10);
    assert(sbucks.taste == 10);
    assert(sbucks.branding == 10);

    assert(terminalshop.quality == 2);
    assert(terminalshop.taste == 3);
    assert(terminalshop.branding == 4);
}

int main(void) {
    printf("Running generic swap tests...\n");

    test_generic_ints();
    printf("  ✓ generic_ints passed\n");

    test_generic_strings();
    printf("  ✓ generic_strings passed\n");

    test_generic_structs();
    printf("  ✓ generic_structs passed\n");

    printf("All tests passed!\n");
    return 0;
}
