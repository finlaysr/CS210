#define STUDENT 0
#define LECTURER 1

struct studnetOrLecturer {
  int tag;
  union {
    struct {
      char name[64];
      int reg[64];
      char degree[64];
    } student;
    struct {
      char firstName[64];
      char lastName[64];
      int room;
    } lecturer;
  } data;
};

void printName(struct studnetOrLecturer s);
