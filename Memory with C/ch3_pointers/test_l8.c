#include <stdio.h>
#include <assert.h>
#include "l8_header.h"  // Should declare: void update_file(int filedata[], int filetype, int lines);

void test_update_file_basic(void) {
    int filedata[200] = {0};
    update_file(filedata, 1, 100);

    assert(filedata[1] == 100); // Number of lines should be updated to 100
    assert(filedata[2] == 1);   // File type should be updated to 1
    assert(filedata[199] == 0); // Last element should be set to 0
    printf("✅ test_update_file_basic passed\n");
}

void test_update_file_different_values(void) {
    int filedata[200];
    for (int i = 0; i < 200; i++) {
        filedata[i] = 69;
    }

    update_file(filedata, 3, 250);

    assert(filedata[1] == 250); // Number of lines should be updated to 250
    assert(filedata[2] == 3);   // File type should be updated to 3
    assert(filedata[199] == 0); // Last element should be set to 0
    printf("✅ test_update_file_different_values passed\n");
}

int main(void) {
    printf("Running tests for update_file...\n");

    test_update_file_basic();
    test_update_file_different_values();

    printf("🎉 All tests passed!\n");
    return 0;
}
