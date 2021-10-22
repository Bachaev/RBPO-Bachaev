#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"


int main(int argc, char* argv[]) {
    //printf(" %d\n",ComapreString(argv[1], argv[2]));
    system("chcp 1251");
    int personCount = 0;
    struct Person* arr = CreatePerson(argc, argv, &personCount);
    printf("Сортировка таблицы по возрастанию(0) или убыванию(1)?\n");
    enum SortType sort;
    bool sd=true;
    while(sd)
    {
        scanf_s("%i", &sort);
        if (sort == 0 || sort == 1) sd = false;
        else printf("Ошибка. Введите 0 или 1\n");
    }
    Sort(arr, personCount, sort);
    Display(arr, personCount);
    return 0;
}
