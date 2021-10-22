#include "Header.h"

void Display(const struct Person* list, const int count) {
	puts("   _____________________________________________________________");
	printf("  %-11s %-11s %-11s %-11s %-11s","|�","|�������", "|���", "|��������", "|��� ��������|\n");
	puts("   _____________________________________________________________");
	for (int i = 0; i < count; i++) {
		printf("  |%-10d |%-10s |%-10s |%-10s |%-10d  |\n", i, list[i].ln, list[i].fn, list[i].mn, list[i].age);
		puts("   _____________________________________________________________");
	};
};