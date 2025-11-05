#include <stdio.h>
#include <string.h> 
__declspec(dllexport) void space(char str[]) {
    int spaces = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ')
            spaces++;
    }
    printf("Number of spaces: %d\n", spaces);
}

__declspec(dllexport) void uppercase(char str[]) {
    for (int i = 0; str[i]; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    printf("Uppercase string: %s\n", str);
}

__declspec(dllexport) void lowercase(char str[]) {
    for (int i = 0; str[i]; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    printf("Lowercase string: %s\n", str);
}

__declspec(dllexport) void reverse(char str[], int l) {
    int c;
    for (int i = 0; i < l / 2; i++) {
        c = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = c;
    }
    printf("Reversed string: %s\n", str);
}
