/*Заменить последнее совпадение подстроки в строке*/
#include <stdio.h>
#include <string.h>

char *rem_sub(char *str, const char *sub)
{
    //Находим первое совпадение подстроки в строке
    char *last_occur = strstr(str, sub);
    //Находим второе совпадение подстроки в строке
    char *next_occur = strstr(last_occur + 1, sub);
    //Проверяем что в next_occur есть совпадение если вернулся null цикл завершается
    while (next_occur) {
    //Проверяем дополнительные совпадения в цикле, если совпадений нет вернется null
        last_occur = next_occur;
        next_occur = strstr(last_occur + 1, sub);
        }
    //Сдвигаемся на длинну подстроки с последнего совпадеиня   
    char *end_of_string = last_occur + strlen(sub);
    //Заменяем последнее совпадение с подстрокой на подстроку без последнего совпадения
    strcpy(last_occur, end_of_string);
    return str;
}

int main()
{
    char str[200];
    char sub[100];
    fgets(str, sizeof(str), stdin);
    str[strlen(str) -1] = '\0';
    fgets(sub, sizeof(sub), stdin);
    sub[strlen(sub) -1] = '\0';
    printf("%s", rem_sub(str, sub));
    return 0;
}
