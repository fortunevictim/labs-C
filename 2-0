#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void swap(char* a, char* b) {
    char c = *a;
    *a = *b;
    *b = c;
}//меняет местами значения адресов

unsigned int minInd(const char* number, char min_larger_than_number) {
    int masLen = (int)strlen(number);
    char min = '9';
    int min_index = -1,i;
    for (i = 0; i < masLen; ++i) {
        if (number[i] <= min && number[i] > min_larger_than_number) {
            min = number[i];
            min_index = i;
        }
    }
    return min_index + 1;
}

void reverse_string(char* str) {
    unsigned int length = strlen(str);
    unsigned int i;
    for (i = 0; i < length / 2; ++i) {
        swap(&str[i], &str[length - i - 1]);
    }
}

void Permutation(char* mas, unsigned int p_count) {
    int masLen = strlen(mas);
    int idx;
    for (idx = masLen - 2; idx >= 0 && p_count != 0; --idx) {

        if (mas[idx] < mas[idx + 1]) {
            swap(&mas[idx], &mas[minInd(mas + idx + 1, mas[idx]) + idx]);
            reverse_string(mas + idx + 1);
            printf("%s\n", mas);
            idx = masLen - 1;
            --p_count;
        }
    }
}

unsigned int charInd(char* mas, char character) {
    unsigned int count = 0, masLen = strlen(mas);
    unsigned int i;
    for ( i = 0; i < masLen; ++i) {
        if (mas[i] == character) {
            count++;
        }
    }
    return count;
}

bool is_valid(char* mas) {
    int masLen = (int)strlen(mas),i;
    for ( i = 0; i < 10; ++i) {
        if (charInd(mas, i + '0') > 1) {
            return false;
        }
    }
    for (i = 0; i < masLen; ++i) {
        if (mas[i] < '0' || mas[i] > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    unsigned int permCount = 0;
    char mas[11] = { 0 };
    if (scanf("%10s %u", mas, &permCount) != 2) {
        return -1;
    }
    if (is_valid(mas)) {
        Permutation(mas, permCount);
    } else {
        printf("bad input");
    }
    return 0;
}
