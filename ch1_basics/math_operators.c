#include <stdio.h>

float snek_score(
  int num_files,
  int num_contributors,
  int num_commits,
  float avg_bug_criticality
) {
  int size_factor = num_files * num_commits;
  int complex_factor = size_factor + num_contributors;
  return (float)complex_factor * avg_bug_criticality;
}

int main() {
	float result = snek_score(10, 10, 10, 0.1);
	printf("%d\n", result);
}
