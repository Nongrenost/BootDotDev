#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "l16_forward_declaration.h"

void test_new_node_simple() {
    snekobject_t node = new_node("root");
    assert(strcmp(node.name, "root") == 0 && "Node name should be 'root'");
    assert(node.child == NULL && "Child should be NULL for a new node");
    printf("test_new_node_simple passed.\n");
}

void test_new_node_empty_name() {
    snekobject_t node = new_node("");
    assert(strcmp(node.name, "") == 0 && "Node name should be an empty string");
    assert(node.child == NULL && "Child should be NULL for a new node");
    printf("test_new_node_empty_name passed.\n");
}

void test_new_node_with_child() {
    snekobject_t child = new_node("child");
    snekobject_t parent = new_node("parent");
    parent.child = &child;

    assert(strcmp(parent.name, "parent") == 0 && "Parent node name should be 'parent'");
    assert(parent.child != NULL && "Parent's child should not be NULL");
    assert(strcmp(parent.child->name, "child") == 0 && "Child node name should be 'child'");
    assert(parent.child->child == NULL && "Child's child should be NULL");

    printf("test_new_node_with_child passed.\n");
}

void test_new_node_nested_children() {
    snekobject_t grandchild = new_node("grandchild");
    snekobject_t child = new_node("child");
    snekobject_t parent = new_node("parent");

    child.child = &grandchild;
    parent.child = &child;

    assert(strcmp(parent.name, "parent") == 0 && "Parent node name should be 'parent'");
    assert(parent.child != NULL && "Parent's child should not be NULL");
    assert(strcmp(parent.child->name, "child") == 0 && "Child node name should be 'child'");
    assert(parent.child->child != NULL && "Child's child should not be NULL");
    assert(strcmp(parent.child->child->name, "grandchild") == 0 && "Grandchild node name should be 'grandchild'");
    assert(parent.child->child->child == NULL && "Grandchild's child should be NULL");

    printf("test_new_node_nested_children passed.\n");
}

int main() {
    test_new_node_simple();
    test_new_node_empty_name();
    test_new_node_with_child();
    test_new_node_nested_children();

    printf("All tests passed successfully.\n");
    return 0;
}
