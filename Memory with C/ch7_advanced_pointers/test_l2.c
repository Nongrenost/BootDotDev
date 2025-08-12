#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "l2_array_of_pointers.c"  // For create_token_pointer_array and token_t

static void test_create_token_pointer_array_single(void) {
    token_t token = {"hello", 1, 1};
    token_t** result = create_token_pointer_array(&token, 1);

    assert(result != NULL);
    assert(result[0] != NULL);
    assert(strcmp(result[0]->literal, "hello") == 0);
    assert(result[0]->line == 1);
    assert(result[0]->column == 1);
    assert(result[0] != &token); // Should not point to original

    free(result[0]);
    free(result);
}

static void test_create_token_pointer_array_multiple(void) {
    token_t tokens[3] = {
        {"foo", 1, 1},
        {"bar", 2, 5},
        {"baz", 3, 10}
    };
    token_t** result = create_token_pointer_array(tokens, 3);

    assert(result != NULL);
    for (int i = 0; i < 3; i++) {
        assert(result[i] != NULL);
        assert(strcmp(result[i]->literal, tokens[i].literal) == 0);
        assert(result[i]->line == tokens[i].line);
        assert(result[i]->column == tokens[i].column);
        assert(result[i] != &tokens[i]);
    }

    for (int i = 0; i < 3; i++) {
        free(result[i]);
    }
    free(result);
}

static void test_create_token_pointer_array_memory_allocation(void) {
    token_t tokens[2] = {
        {"test1", 1, 1},
        {"test2", 2, 2}
    };
    token_t** result = create_token_pointer_array(tokens, 2);

    assert(result != NULL);
    assert(result[0] != NULL);
    assert(result[1] != NULL);
    assert(result[0] != result[1]);
    assert(result[0] != &tokens[0]);
    assert(result[1] != &tokens[1]);

    free(result[0]);
    free(result[1]);
    free(result);
}

int main(void) {
    printf("Running test_create_token_pointer_array_single...\n");
    test_create_token_pointer_array_single();
    printf("Passed.\n");

    printf("Running test_create_token_pointer_array_multiple...\n");
    test_create_token_pointer_array_multiple();
    printf("Passed.\n");

    printf("Running test_create_token_pointer_array_memory_allocation...\n");
    test_create_token_pointer_array_memory_allocation();
    printf("Passed.\n");

    printf("All tests passed!\n");
    return 0;
}
