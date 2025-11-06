typedef struct EMPLOYEE {
  int employee_number;
  char first_name[64];
  char last_name[64];
  char job_title[64];
  float salary;
} Employee;

Employee *new_employee_array(int n);
void enter_details(Employee *employee);
Employee *get_highest_paid(Employee *employees, int n);
void print_details(Employee *employee);
void delete_employee_array(Employee **employees);
