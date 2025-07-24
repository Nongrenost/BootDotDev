#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "l14_exercise.h" 

void test_concat_empty_strings() {
    char str1[100] = "";
    const char *str2 = "";
    concat_strings(str1, str2);
    assert(strcmp(str1, "") == 0 && "Concatenating two empty strings should result in an empty string");
}

void test_concat_empty_to_nonempty() {
    char str1[100] = "Hello";
    const char *str2 = "";
    concat_strings(str1, str2);
    assert(strcmp(str1, "Hello") == 0 && "Concatenating an empty string to a non-empty string should not change the original string");
}

void test_concat_small_strings() {
    char str1[100] = "Hello ";
    const char *str2 = "World";
    concat_strings(str1, str2);
    assert(strcmp(str1, "Hello World") == 0 && "Concatenating strings should work correctly");
}

void test_concat_long_strings() {
    char str1[200] = "This is a longer string that ";
    const char *str2 = "will be concatenated with another long string.";
    concat_strings(str1, str2);
    assert(strcmp(str1, "This is a longer string that will be concatenated with another long string.") == 0 && "Concatenating longer strings should work correctly");
}

void test_concat_nonempty_to_empty() {
    char str1[100] = "";
    const char *str2 = "Hello";
    concat_strings(str1, str2);
    assert(strcmp(str1, "Hello") == 0 && "Concatenating a string to an empty should change the original string");
}

int main() {
    printf("Running test_concat_empty_strings...\n");
    test_concat_empty_strings();
    printf("Passed.\n");

    printf("Running test_concat_empty_to_nonempty...\n");
    test_concat_empty_to_nonempty();
    printf("Passed.\n");

    printf("Running test_concat_small_strings...\n");
    test_concat_small_strings();
    printf("Passed.\n");

    printf("Running test_concat_long_strings...\n");
    test_concat_long_strings();
    printf("Passed.\n");

    printf("Running test_concat_nonempty_to_empty...\n");
    test_concat_nonempty_to_empty();
    printf("Passed.\n");

    printf("All tests passed.\n");
    return 0;
}
