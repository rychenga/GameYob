#pragma once

#include <stdio.h>

#include <vector>

#include "types.h"

extern std::vector<std::string> supportedImages;

extern bool menuOn;

extern bool customBordersEnabled;
extern int borderScaleMode;
extern int gbColorizeMode;
extern int pauseOnMenu;
extern int stateNum;
extern int gameScreen;
extern int scaleMode;
extern int scaleFilter;
extern bool fpsOutput;
extern bool timeOutput;
extern int fastForwardFrameSkip;
extern FILE* linkSocket;

void setMenuDefaults();

void displayMenu();
void closeMenu();

void redrawMenu();
void updateMenu();
void printMenuMessage(const char* s);

void displaySubMenu(void (* updateFunc)());
void closeSubMenu();

int getMenuOption(const char* name);
void setMenuOption(const char* name, int value);
void enableMenuOption(const char* name);
void disableMenuOption(const char* name);

void menuParseConfig(char* line);
const std::string menuPrintConfig();

bool showConsoleDebug();

