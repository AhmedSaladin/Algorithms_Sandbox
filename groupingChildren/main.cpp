/*
Problem: Many children came to celebration.
Orginize them into minimum possible numbers
of groups such that the age of any two
children in the same group differ by
at most one year.

childrens = {3, 3.5, 4, 5, 5.5, 6, 6, 8, 9, 10, 11}
 group1 = {3, 3.5, 4}
 group2 = {5, 5.5, 6, 6}
 group3 = {8, 9}
 group4 = {10, 11}
 groups = 4
*/
#include <iostream>
int grouping(float a[], int l);

int main() {

  float childrens[] = {3, 3.5, 4, 5, 5.5, 6, 6, 8, 9, 10, 11};

  std::cout << grouping(childrens, 10) << std::endl;

  return 0;
}

int grouping(float a[], int l) {
  int index = 0;
  int position = 0;
  int groups = 0;
  while (index < l) {
    for (int j = index; j < l; j++) {
      if (a[index] + 1 >= a[j + 1]) {
        position = j + 1;
      } else
        break;
    }
    index = position + 1;
    groups++;
  }
  return groups;
}
