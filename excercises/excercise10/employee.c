#include "employee.h"
#include <stdio.h>
#include <stdlib.h>

Employee *new_employee_array(int n) {
  Employee *employees = malloc(sizeof(Employee) * n);
  return employees;
}

void enter_details(Employee *employee) {
  printf("Enter details of employee %d: ", employee->employee_number);
  scanf("%s %s %s %f", employee->first_name, employee->last_name,
        employee->job_title, &employee->salary);
}

Employee *get_highest_paid(Employee *employees, int n) {
  float largest = -1;
  int pos;
  for (int i = 0; i < n; i++) {
    if (employees[i].salary > largest) {
      largest = employees[i].salary;
      pos = i;
    }
  }
  return &employees[pos];
}

void print_details(Employee *employee) {
  printf("----------------------------------\n"
         "Employee "
         "Record\n----------------------------------\n");
  printf("Employee number: %d\n", employee->employee_number);
  printf("Name:            %s, %s\n", employee->last_name,
         employee->first_name);
  printf("Job Title:       %s\n", employee->job_title);
  printf("Salary:          %.2f\n", employee->salary);
  printf("----------------------------------\n");
}

void delete_employee_array(Employee **employees) {
  free(*employees);
  *employees = NULL;
}
