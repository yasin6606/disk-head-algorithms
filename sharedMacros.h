//
// Created by yasin on 6/10/2023.
//

#ifndef HW3_SHAREDMACROS_H
#define HW3_SHAREDMACROS_H

#define MENU_NUM 6
#define DEFAULT_CYLINDER_NUM 1

// String colors
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define FONT_COL_CUSTOM(R, G, B)   "\e[38;2;" #R ";" #G ";" #B "m"
#define BG_COL_CUSTOM(R, G, B)   "\e[48;2;" #G ";" #G ";" #B "m"

#endif //HW3_SHAREDMACROS_H