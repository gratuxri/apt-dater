
#ifndef _COLOR_H
#define _COLOR_H

#define COLOR_DEFAULT -1

#define PREFIX_COLOR_BRIGHT "bright"

enum {
 UI_COLOR_DEFAULT = 0,
 UI_COLOR_MENU,
 UI_COLOR_STATUS,
 UI_COLOR_SELECTOR,
 UI_COLOR_BODY,
 UI_COLOR_QUERY,
 UI_COLOR_INPUT,
 UI_COLOR_MAX,
};

void
ui_start_color();

#endif /* _COLOR_H */
