#ifndef COOLC_H
#define COOLC_H

#include <stdio.h>
#include <string.h>

static void drawTitleBox(const char *title) {
    int len = strlen(title);

    printf("┌");
    for (int i = 0; i < len + 2; i++) printf("─");
    printf("┐\n");

    printf("│ %s │\n", title);

    printf("└");
    for (int i = 0; i < len + 2; i++) printf("─");
    printf("┘\n");
}

static void drawMenuBox(const char *options[], int n) {
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        int len = strlen(options[i]) + 3;
        if (len > maxLen) maxLen = len;
    }

    printf("┌");
    for (int i = 0; i < maxLen + 3; i++) printf("─");
    printf("┐\n");

    for (int i = 0; i < n; i++) {
        printf("│ [%d] %-*s │\n", i + 1, maxLen - 3, options[i]);
    }

    printf("└");
    for (int i = 0; i < maxLen + 3; i++) printf("─");
    printf("┘\n");
}

#endif 