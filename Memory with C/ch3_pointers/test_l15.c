#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "l15_header.h"

// Utility to reset a TextBuffer
void init_text_buffer(TextBuffer* buf) {
    memset(buf->buffer, 0, sizeof(buf->buffer));
    buf->length = 0;
}

void test_return_1_for_null_value() {
    TextBuffer dest;
    init_text_buffer(&dest);
    const char* src = NULL;
    int result = smart_append(&dest, src);
    assert(result == 1); // Should return 1 for null value
}

void test_smart_append_empty_buffer() {
    TextBuffer dest;
    init_text_buffer(&dest);
    const char* src = "Hello";
    int result = smart_append(&dest, src);
    assert(result == 0); // Should return 0 for successful append
    assert(strcmp(dest.buffer, "Hello") == 0); // Buffer should contain "Hello"
    assert(dest.length == 5); // Length should be 5
}

void test_smart_append_full_buffer() {
    TextBuffer dest;
    strcpy(dest.buffer, "This is a very long string that will fill up the entire buffer.");
    dest.length = strlen(dest.buffer);
    const char* src = " Extra";
    int result = smart_append(&dest, src);
    assert(result == 1); // Should return 1 for unsuccessful append
    assert(strcmp(dest.buffer, "This is a very long string that will fill up the entire buffer.") == 0);
    assert(dest.length == 63);
}

void test_smart_append_overflow() {
    TextBuffer dest;
    strcpy(dest.buffer, "This is a long string");
    dest.length = strlen(dest.buffer);
    const char* src = " that will fill the whole buffer and leave no space for some of the chars.";
    int result = smart_append(&dest, src);
    assert(result == 1); // Should return 1 for overflow append
    assert(strcmp(dest.buffer, "This is a long string that will fill the whole buffer and leave") == 0);
    assert(dest.length == 63);
}

int main() {
    test_return_1_for_null_value();
    test_smart_append_empty_buffer();
    test_smart_append_full_buffer();
    test_smart_append_overflow();
    printf("All tests passed.\n");
    return 0;
}
