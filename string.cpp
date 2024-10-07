#include <iostream>
#include <cstring>

void reverseString(char* str) {
    int len = std::strlen(str);
    for (int i = 0; i < len / 2; ++i) {
        std::swap(str[i], str[len - i - 1]);
    }
}
