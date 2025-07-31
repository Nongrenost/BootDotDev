#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "l17_mutual_structs.h"

// Helper macro for readable output
#define TEST_CASE(name) \
    printf("Running %s...\n", name); \
    name(); \
    printf("✓ %s passed.\n", name);

// Test: assign employee to department
void test_assign_employee1() {
    employee_t emp = create_employee(2, "CEO Dax");
    department_t dept = create_department("C Suite");
    assign_employee(&emp, &dept);

    assert(emp.department != NULL);
    assert(strcmp(emp.department->name, "C Suite") == 0);
}

// Test: assign manager to department
void test_assign_manager1() {
    employee_t manager = create_employee(3, "Influencer Prime");
    department_t dept = create_department("Marketing");
    assign_manager(&dept, &manager);

    assert(dept.manager != NULL);
    assert(strcmp(dept.manager->name, "Influencer Prime") == 0);
}

// Test: assign employee to another department
void test_assign_employee2() {
    employee_t emp = create_employee(4, "Vegan Intern Adam");
    department_t dept = create_department("Marketing");
    assign_employee(&emp, &dept);

    assert(emp.department != NULL);
    assert(strcmp(emp.department->name, "Marketing") == 0);
}

// Test: assign manager and check ID
void test_assign_manager2() {
    employee_t manager = create_employee(5, "CDO David");
    department_t dept = create_department("C Suite");
    assign_manager(&dept, &manager);

    assert(dept.manager != NULL);
    assert(strcmp(dept.manager->name, "CDO David") == 0);
    assert(manager.id == 5);
}

// Entry point
int main() {
    TEST_CASE(test_assign_employee1);
    TEST_CASE(test_assign_manager1);
    TEST_CASE(test_assign_employee2);
    TEST_CASE(test_assign_manager2);

    printf("All tests passed.\n");
    return 0;
}
