#include <stdio.h>

struct GradeAverageResult {
  int average;
  char grade;
};

struct GradeAverageResult average(int grades[]) {
  char gradeValue[5] = {'A', 'B', 'C', 'D', 'F'};
  int length = sizeof(grades)/sizeof(grades[0]);
  struct GradeAverageResult gar = {
    0,
    'a'
  };

  for (int i = 0; i <= length; i++) {
    if (grades[i] > gar.average) {
      gar.average = grades[i];
      gar.grade = gradeValue[i];
    }
  }
  
  return gar;
}

int main(void) {
  int grade;
  unsigned int aCount = 0;
  unsigned int bCount = 0;
  unsigned int cCount = 0;
  unsigned int dCount = 0;
  unsigned int eCount = 0;
  unsigned int fCount = 0;

  puts("Enter the letter grades.");
  puts("Enter Ctrl+D (Unix Systems) /Ctrl+Z (Windows Systems) to end.");
  // enter Ctrl D/Ctrl Z to stop execution

  while ((grade = getchar()) != EOF) {
    switch (grade) {
      case 'A':
      case 'a':
        ++aCount;
        break;

      case 'B':
      case 'b':
        ++bCount;
        break;

      case 'C':
      case 'c':
        ++cCount;
        break;

      case 'D':
      case 'd':
        ++dCount;
        break;

      case 'F':
      case 'f':
        ++fCount;
        break;
      
      case '\n':
      case '\t':
      case ' ':
        break;

      default:
        printf("%s", "Incorrect letter grade entered.");
        puts("Enter a new grade.");
        break;
    }
  }

  puts("\nTotals for each letter grade are: ");
  printf("A: %u\n", aCount);
  printf("B: %u\n", bCount);
  printf("C: %u\n", cCount);
  printf("D: %u\n", dCount);
  printf("F: %u\n", fCount);

  int grades[5] = {aCount, bCount, cCount, dCount, fCount};
  struct GradeAverageResult gradeAverage = average(grades);
  printf("Average Grade: %c\tTotals: %d\n", gradeAverage.grade, gradeAverage.average);
}
