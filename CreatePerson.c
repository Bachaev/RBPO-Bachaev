#include "Header.h"

struct Person* CreatePerson(int argc, char* argv[], int *personCount)
{
	//ѕодсчет количество персон
	for (int i = 1; i < argc; ++i)
	{
		if (CompareString(argv[i], "--person") == 0)
		{
			*personCount = *personCount + 1;
		}
	}
	struct Person* person = (struct Person*)malloc(sizeof(struct Person) * (*personCount));
	//«адаем параметры по умолчанию всем персонам
	for (int i = 0; i < *personCount; ++i)
	{
		person[i] = unknownPerson;
	}
	// опирование значений из командной строки в струкутру
	for (int i = 1, Index=0; i < argc; ++i)
	{
		if (CompareString(argv[i], "--person") == 0) {
			Index++;
		}
			else if (CompareString(argv[i], "--fn") == 0 && argv[i+1][0] !='-') {
				//i++;
				person[Index-1].fn = _strdup(argv[i+1]);
			}
			else if (CompareString(argv[i], "--mn") == 0 && argv[i+1][0] != '-') {
				//i++;
				person[Index-1].mn = _strdup(argv[i+1]);
			}
			else if (CompareString(argv[i], "--ln")==0 && argv[i+1][0] != '-') {
				//i++;
				person[Index-1].ln = _strdup(argv[i+1]);
			}
			else if (CompareString(argv[i], "--age") == 0 && argv[i+1][0] != '-') {
				//i++;
				person[Index - 1].age = atoi(argv[i + 1]);
				//sscanf_s(argv[i-1], "%u", &person[Index+1].age);
			}
	};
	return person;
}