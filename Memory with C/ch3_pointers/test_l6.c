#include <stdio.h>
#include <assert.h>
#include "l6_header.h"  

void test_change_filetype_cpp_to_python(void) {
    codefile_t original;
    original.lines = 100;
    original.filetype = 1;

    codefile_t result = change_filetype(&original, 2);
    assert(result.filetype == 2);    // Filetype should change
    assert(result.lines == 100);     // Lines should remain unchanged
}

void test_change_filetype_same_type(void) {
    codefile_t original;
    original.lines = 50;
    original.filetype = 3;

    codefile_t result = change_filetype(&original, 3);
    assert(result.filetype == 3);
    assert(result.lines == 50);
}

void test_change_filetype_java_to_rust(void) {
    codefile_t original;
    original.lines = 200;
    original.filetype = 4;

    codefile_t result = change_filetype(&original, 5);
    assert(result.filetype == 5);
    assert(result.lines == 200);
}

void test_change_filetype_zero_lines(void) {
    codefile_t original;
    original.lines = 0;
    original.filetype = 1;

    codefile_t result = change_filetype(&original, 6);
    assert(result.filetype == 6);
    assert(result.lines == 0);
}

void test_change_filetype_no_mutation(void) {
    codefile_t original;
    original.lines = 150;
    original.filetype = 7;

    codefile_t backup = original;

    codefile_t result = change_filetype(&original, 8);
    assert(result.filetype == 8);
    assert(original.filetype == backup.filetype);  // Ensure original is unchanged
    assert(original.lines == backup.lines);
}

int main(void) {
    printf("Running tests for change_filetype...\n");

    test_change_filetype_cpp_to_python();
    printf("✅ test_change_filetype_cpp_to_python passed\n");

    test_change_filetype_same_type();
    printf("✅ test_change_filetype_same_type passed\n");

    test_change_filetype_java_to_rust();
    printf("✅ test_change_filetype_java_to_rust passed\n");

    test_change_filetype_zero_lines();
    printf("✅ test_change_filetype_zero_lines passed\n");

    test_change_filetype_no_mutation();
    printf("✅ test_change_filetype_no_mutation passed\n");

    printf("🎉 All tests passed!\n");
    return 0;
}
