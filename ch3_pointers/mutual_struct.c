/*
Mutual Structs

Forward declarations can also be used when two structs reference each other (a circular reference). For example, a Person has a Computer and a Computer has a Person:
*/

#include <stddef.h>

typedef struct Employee employee_t;
typedef struct Department department_t;

typedef struct Employee {
  int id;
  char *name;
  department_t *department;
} employee_t;

typedef struct Department {
    char *name;
    employee_t *manager;
} department_t;

employee_t create_employee(int id, char *name) {
  employee_t emp = {
    .id = id,
    .name = name,
    .department = NULL
  };
  return emp;
}

department_t create_department(char *name) {
  department_t dept = {
    .name = name,
    .manager = NULL
  };
  return dept;
}

void assign_employee(employee_t *emp, department_t *department) {
  emp->department = department;
}

void assign_manager(department_t *dept, employee_t *manager) {
  dept->manager = manager;
}

int main() {
  employee_t emp = create_employee(4, "Vegan Intern Adam");
  department_t dept1 = create_department("Marketing");

  employee_t manager = create_employee(5, "CDO David");
  department_t dept2 = create_department("C Suite");	
}
