#include <stdio.h>

// A struct packages different pieces of data together

/*
 * Syntax:
 *
 * struct name {
 *   type name;
 *   type1 name1;
 * };
 */

struct point {
  int x;
  int y;
};

// instead of typing "struct point" we can just type "Point"
typedef struct point Point;

// we can put the struct in Uperacase so that we always use the typedef instead
struct STUDENT {
  char name[50];
  int regNum;
  int marks[10];
  struct STUDENT *buddy; // pointer to another student struct
};

// instead of typing "struct student" we can just type "Student"
typedef struct STUDENT Student;

// Can also combine the two into one
typedef struct RECT {
  Point topleft;
  Point bottomright;
  char colour;
} Rect;

#define ROWS 20
#define COLUMNS 44

void display_canvas(char canvas[ROWS][COLUMNS]);
Point add_point(Point p, Point q);
void paint_point(char canvas[ROWS][COLUMNS], Point pt, char c);
int in_rect(Point p, Rect *r);

int main(void) {
  // create new struct point called p1
  struct point p1;
  p1.x = 50;
  p1.y = 21;

  Point p2 = {p1.y, 10};
}

void display_canvas(char canvas[ROWS][COLUMNS]) {
  for (int row = 0; row < ROWS; row++) {
    for (int col = 0; col < COLUMNS; col++) {
      printf("%c", canvas[row][col]);
    }
    printf("\n");
  }
}

Point add_point(Point p, Point q) {
  Point r = {p.x + q.x, p.y + q.y};
  return r;
}

void paint_point(char canvas[ROWS][COLUMNS], Point pt, char c) {
  canvas[pt.y][pt.x] = c;
}

int in_rect(Point p, Rect *r) {
  // -> same as *.
  return (p.x > (*r).topleft.x && p.x < (*r).bottomright.x &&
          p.y > (r->topleft).y && p.y < (r->bottomright).y);
}
