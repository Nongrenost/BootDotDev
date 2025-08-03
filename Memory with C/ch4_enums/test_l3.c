#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "l3_header.h" // Your own header that defines http_error_code_t and http_to_str

void test_switch_enum() {
    printf("Running test_switch_enum...\n");

    assert(strcmp(http_to_str(HTTP_BAD_REQUEST), "400 Bad Request") == 0);
    assert(strcmp(http_to_str(HTTP_UNAUTHORIZED), "401 Unauthorized") == 0);
    assert(strcmp(http_to_str(HTTP_NOT_FOUND), "404 Not Found") == 0);
    assert(strcmp(http_to_str(HTTP_TEAPOT), "418 I AM A TEAPOT!") == 0);
    assert(strcmp(http_to_str(HTTP_INTERNAL_SERVER_ERROR), "500 Internal Server Error") == 0);

    printf("test_switch_enum passed.\n");
}

void test_switch_enum_default() {
    printf("Running test_switch_enum_default...\n");

    assert(strcmp(http_to_str((http_error_code_t)999), "Unknown HTTP status code") == 0);

    printf("test_switch_enum_default passed.\n");
}

int main() {
    test_switch_enum();
    test_switch_enum_default();

    printf("All tests passed.\n");
    return 0;
}
