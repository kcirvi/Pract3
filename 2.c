#include <stdio.h>

int main() {
    char colors[3][10] = {"красный", "синий", "зеленый"};

    strcpy(colors[0], "желтый");
  
    for (int i = 0; i < 3; i++) {
        printf("%s\n", colors[i]);
    }

    return 0;
}
