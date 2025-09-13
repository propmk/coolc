#ifndef COOLC_H
#define COOLC_H

#include <stdio.h>
#include <string.h>

#define BLACK "\033[30m"
#define BRIGHT_BLACK "\033[90m"
#define RED "\033[31m"
#define BRIGHT_RED "\033[91m"
#define GREEN "\033[32m"
#define BRIGHT_GREEN "\033[92m"
#define YELLOW "\033[33m"
#define BRIGHT_YELLOW "\033[93m"
#define BLUE "\033[34m"
#define BRIGHT_BLUE "\033[94m"
#define MAGENTA "\033[35m"
#define BRIGHT_MAGENTA "\033[95m"
#define CYAN "\033[36m"
#define BRIGHT_CYAN "\033[96m"
#define WHITE "\033[37m"
#define BRIGHT_WHITE "\033[97m"

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"
#define HIGHLIGHT "\033[7m"
#define CLEAR_LINE "\033[K"
#define HIDE_CURSOR "\033[?25l"
#define SHOW_CURSOR "\033[?25h"

#define setState(state) printf("%s", state)
#define resetState() printf(RESET)

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