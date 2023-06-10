#include "../main.h"
#include "../sharedMacros.h"

void defaultInfo(void) {
    printf(
            "Hello\nThis program is created by %sYasin Gourkani%s Student ID: %s9974359%s\n\n%sShiraz University%s\n\n",
            ANSI_COLOR_CYAN,
            ANSI_COLOR_RESET,
            ANSI_COLOR_CYAN,
            ANSI_COLOR_RESET,
            ANSI_COLOR_GREEN,
            ANSI_COLOR_RESET
    );

    fflush(stdout);
}
