#include <assert.h>
#include <stdio.h>
#include "l9_add.c"   // include your implementation directly

int main(void) {
    // --- test integers ---
    snek_object_t *i1 = new_snek_integer(5);
    assert(i1->kind == INTEGER);
    assert(i1->data.v_int == 5);

    // --- test floats ---
    snek_object_t *f1 = new_snek_float(3.14f);
    assert(f1->kind == FLOAT);
    assert(f1->data.v_float == 3.14f);

    // --- test string ---
    snek_object_t *s1 = new_snek_string("hello");
    assert(s1->kind == STRING);
    assert(s1->data.v_string != NULL);
    assert(s1->data.v_string[0] == 'h');

    // --- test vector3 ---
    snek_object_t *vx = new_snek_integer(1);
    snek_object_t *vy = new_snek_integer(2);
    snek_object_t *vz = new_snek_integer(3);
    snek_object_t *v = new_snek_vector3(vx, vy, vz);
    assert(v->kind == VECTOR3);
    assert(v->data.v_vector3.x->data.v_int == 1);
    assert(v->data.v_vector3.y->data.v_int == 2);
    assert(v->data.v_vector3.z->data.v_int == 3);

    // --- test arrays ---
    snek_object_t *arr = new_snek_array(3);
    assert(arr->kind == ARRAY);
    assert(arr->data.v_array.size == 3);

    snek_object_t *elem1 = new_snek_integer(42);
    bool ok = snek_array_set(arr, 0, elem1);
    assert(ok == true);

    snek_object_t *get1 = snek_array_get(arr, 0);
    assert(get1 == elem1);

    // --- test out of range ---
    bool out_of_range = snek_array_set(arr, 10, elem1);
    assert(out_of_range == false);

    printf("✅ All tests passed!\n");
    return 0;
}
