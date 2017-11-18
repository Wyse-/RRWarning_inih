#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "ini.h"

/* Struct which defines each field of the ini file. */
typedef struct 
{
    const char* Game1;
    const char* Game2;
    const char* Game3;
    const char* Game4;
    const char* Game5;
    const char* Game6;
    const char* Game7;
    const char* Game8;
    const char* Game9;
    const char* Game10;
    const char* Game11;
    const char* Game12;
    const char* Game13;
    const char* Game14;
    const char* Game15;
    
    const int* RR1;
    const int* RR2;
    const int* RR3;
    const int* RR4;
    const int* RR5;
    const int* RR6;
    const int* RR7;
    const int* RR8;
    const int* RR9;
    const int* RR10;
    const int* RR11;
    const int* RR12;
    const int* RR13;
    const int* RR14;
    const int* RR15;
    const int* RRNoGame;
    
    const char* Path1;
    const char* Path2;
    const char* Path3;
    const char* Path4;
    const char* Path5;
    const char* Path6;
    const char* Path7;
    const char* Path8;
    const char* Path9;
    const char* Path10;
    const char* Path11;
    const char* Path12;
    const char* Path13;
    const char* Path14;
    const char* Path15;
    const char* PathNoGame;


} configuration;

/* Process the ini file and store its values into configuration struct. */
static int handler(void* Games, const char* section, const char* name,
                   const char* value)
{
    configuration* pconfig = (configuration*)Games;

    #define MATCH(s, n) strcmp(section, s) == 0 && strcmp(name, n) == 0
    if (MATCH("Games", "Game1")) {
        pconfig->Game1 = strdup(value);
    } else if (MATCH("Games", "Game2")) {
        pconfig->Game2 = strdup(value);
    } else if (MATCH("Games", "Game3")) {
        pconfig->Game3 = strdup(value);
    } else if (MATCH("Games", "Game4")) {
        pconfig->Game4 = strdup(value);
    } else if (MATCH("Games", "Game5")) {
        pconfig->Game5 = strdup(value);
    } else if (MATCH("Games", "Game6")) {
        pconfig->Game6 = strdup(value);
    } else if (MATCH("Games", "Game7")) {
        pconfig->Game7 = strdup(value);
    } else if (MATCH("Games", "Game8")) {
        pconfig->Game8 = strdup(value);
    } else if (MATCH("Games", "Game9")) {
        pconfig->Game9 = strdup(value);
    } else if (MATCH("Games", "Game10")) {
        pconfig->Game10 = strdup(value);
    } else if (MATCH("Games", "Game11")) {
        pconfig->Game11 = strdup(value);
    } else if (MATCH("Games", "Game12")) {
        pconfig->Game12 = strdup(value);
    } else if (MATCH("Games", "Game13")) {
        pconfig->Game13 = strdup(value);
    } else if (MATCH("Games", "Game14")) {
        pconfig->Game14 = strdup(value);
    } else if (MATCH("Games", "Game15")) {
        pconfig->Game15 = strdup(value);
    } else if (MATCH("RefreshRates", "RR1")) {
        pconfig->RR1 = (int*)atoi(value);
    } else if (MATCH("RefreshRates", "RR2")) {
        pconfig->RR2 = (int*)atoi(value);
    } else if (MATCH("RefreshRates", "RR3")) {
        pconfig->RR3 = (int*)atoi(value);
    } else if (MATCH("RefreshRates", "RR4")) {
        pconfig->RR4 = (int*)atoi(value);
    } else if (MATCH("RefreshRates", "RR5")) {
        pconfig->RR5 = (int*)atoi(value);
    } else if (MATCH("RefreshRates", "RR6")) {
        pconfig->RR6 = (int*)atoi(value);
    } else if (MATCH("RefreshRates", "RR7")) {
        pconfig->RR7 = (int*)atoi(value);
    } else if (MATCH("RefreshRates", "RR8")) {
        pconfig->RR8 = (int*)atoi(value);
    } else if (MATCH("RefreshRates", "RR9")) {
        pconfig->RR9 = (int*)atoi(value);
    } else if (MATCH("RefreshRates", "RR10")) {
        pconfig->RR10 = (int*)atoi(value);
    } else if (MATCH("RefreshRates", "RR11")) {
        pconfig->RR11 = (int*)atoi(value);
    } else if (MATCH("RefreshRates", "RR12")) {
        pconfig->RR12 = (int*)atoi(value);
    } else if (MATCH("RefreshRates", "RR13")) {
        pconfig->RR13 = (int*)atoi(value);
    } else if (MATCH("RefreshRates", "RR14")) {
        pconfig->RR14 = (int*)atoi(value);
    } else if (MATCH("RefreshRates", "RR15")) {
        pconfig->RR15 = (int*)atoi(value);
    } else if (MATCH("RefreshRates", "RRNoGame")) {
        pconfig->RRNoGame = (int*)atoi(value);
    } else if (MATCH("Paths", "Path1")) {
        pconfig->Path1 = strdup(value);
    } else if (MATCH("Paths", "Path2")) {
        pconfig->Path2 = strdup(value);
    } else if (MATCH("Paths", "Path3")) {
        pconfig->Path3 = strdup(value);
    } else if (MATCH("Paths", "Path4")) {
        pconfig->Path4 = strdup(value);
    } else if (MATCH("Paths", "Path5")) {
        pconfig->Path5 = strdup(value);
    } else if (MATCH("Paths", "Path6")) {
        pconfig->Path6 = strdup(value);
    } else if (MATCH("Paths", "Path7")) {
        pconfig->Path7 = strdup(value);
    } else if (MATCH("Paths", "Path8")) {
        pconfig->Path8 = strdup(value);
    } else if (MATCH("Paths", "Path9")) {
        pconfig->Path9 = strdup(value);
    } else if (MATCH("Paths", "Path10")) {
        pconfig->Path10 = strdup(value);
    } else if (MATCH("Paths", "Path11")) {
        pconfig->Path11 = strdup(value);
    } else if (MATCH("Paths", "Path12")) {
        pconfig->Path12 = strdup(value);
    } else if (MATCH("Paths", "Path13")) {
        pconfig->Path13 = strdup(value);
    } else if (MATCH("Paths", "Path14")) {
        pconfig->Path14 = strdup(value);
    } else if (MATCH("Paths", "Path15")) {
        pconfig->Path15 = strdup(value);
    } else if (MATCH("Paths", "PathNoGame")) {
        pconfig->PathNoGame = strdup(value);
    } else {
        return 0;  /* unknown section/name, error */
    }
    return 1;
}

int main(int argc, char** argv) {
    /* Ini parsing initialization */
    configuration config;
    int flag = 1; // Flag used to check if ini_parse throws an error.
    int i = 0; // Running game warning display flag. Will be set to 1 if a game is currently running and the warning has been displayed; its value will be 0 when the game is closed.
    int f = 0; // No game running warning diplay flag. Will be set to 1 if no games are running, the current refresh rate is not equal to the "RRNoGame" value in the ini file and the warning has been displayed; its value will be set to 0 once a game is started.
    while(flag != 0){ // Attempt parsing ini file until it succeeds (ini_parse will return 0 if it throws an error).
        flag = ini_parse("config.ini", handler, &config);
    }

    /* RRWarning start */
    while(1){ // Endless loop
        DEVMODE* monitorProperties = NULL; // Initialize null DEVMODE pointer
        monitorProperties = (DEVMODE*)malloc(sizeof(DEVMODE)); // Dynamically allocate memory to the DEVMODE pointer
        EnumDisplaySettingsA(NULL, ENUM_CURRENT_SETTINGS, monitorProperties); // Call EnumDisplaySettings function (from windows.h)
       
        /* Attemp to get all possible game windows. If one of them is running its handle will be stored in its respective handle variable. */
        HANDLE hwndgame1 = FindWindowA(NULL, config.Game1);
        HANDLE hwndgame2 = FindWindowA(NULL, config.Game2);
        HANDLE hwndgame3 = FindWindowA(NULL, config.Game2);
        HANDLE hwndgame4 = FindWindowA(NULL, config.Game4);
        HANDLE hwndgame5 = FindWindowA(NULL, config.Game5);
        HANDLE hwndgame6 = FindWindowA(NULL, config.Game6);
        HANDLE hwndgame7 = FindWindowA(NULL, config.Game7);
        HANDLE hwndgame8 = FindWindowA(NULL, config.Game8);
        HANDLE hwndgame9 = FindWindowA(NULL, config.Game9);
        HANDLE hwndgame10 = FindWindowA(NULL, config.Game10);
        HANDLE hwndgame11 = FindWindowA(config.Game11, NULL);
        HANDLE hwndgame12 = FindWindowA(config.Game12, NULL);
        HANDLE hwndgame13 = FindWindowA(config.Game13, NULL);
        HANDLE hwndgame14 = FindWindowA(config.Game14, NULL);
        HANDLE hwndgame15 = FindWindowA(config.Game15, NULL);
        
         
        /* Check all window handles: if one of them is running (i.e. not null), the current refresh rate is different from the one in the ini file, and there's not a game already open (i.e. i equals 0), then display a warning, set the i flag to 1 and the f flag to 0. */
        if((hwndgame1 != NULL) && monitorProperties->dmDisplayFrequency != config.RR1 && i == 0){
            system(config.Path1);
            i = 1;
            f = 0;
        }
        if((hwndgame2 != NULL) && monitorProperties->dmDisplayFrequency != config.RR2 && i == 0){
            system(config.Path2);
            i = 1;
            f = 0;
        }
        if((hwndgame3 != NULL) && monitorProperties->dmDisplayFrequency != config.RR3 && i == 0){
            system(config.Path3);
            i = 1;
            f = 0;
        }
        if((hwndgame4 != NULL) && monitorProperties->dmDisplayFrequency != config.RR4 && i == 0){
            system(config.Path4);
            i = 1;
            f = 0;
        }
        if((hwndgame5 != NULL) && monitorProperties->dmDisplayFrequency != config.RR5 && i == 0){
            system(config.Path5);
            i = 1;
            f = 0;
        }
        if((hwndgame6 != NULL) && monitorProperties->dmDisplayFrequency != config.RR6 && i == 0){
            system(config.Path6);
            i = 1;
            f = 0;
        }
        if((hwndgame7 != NULL) && monitorProperties->dmDisplayFrequency != config.RR7 && i == 0){
            system(config.Path7);
            i = 1;
            f = 0;
        }
        if((hwndgame8 != NULL) && monitorProperties->dmDisplayFrequency != config.RR8 && i == 0){
            system(config.Path8);
            i = 1;
            f = 0;
        }
        if((hwndgame9 != NULL) && monitorProperties->dmDisplayFrequency != config.RR9 && i == 0){
            system(config.Path9);
            i = 1;
            f = 0;
        }
        if((hwndgame10 != NULL) && monitorProperties->dmDisplayFrequency != config.RR10 && i == 0){
            system(config.Path10);
            i = 1;
            f = 0;
        }
        if((hwndgame11 != NULL) && monitorProperties->dmDisplayFrequency != config.RR11 && i == 0){
            system(config.Path11);
            i = 1;
            f = 0;
        }
        if((hwndgame12 != NULL) && monitorProperties->dmDisplayFrequency != config.RR12 && i == 0){
            system(config.Path12);
            i = 1;
            f = 0;
        }
        if((hwndgame13 != NULL) && monitorProperties->dmDisplayFrequency != config.RR13 && i == 0){
            system(config.Path13);
            i = 1;
            f = 0;
        }
        if((hwndgame14 != NULL) && monitorProperties->dmDisplayFrequency != config.RR14 && i == 0){
            system(config.Path14);
            i = 1;
            f = 0;
        }
        if((hwndgame15 != NULL) && monitorProperties->dmDisplayFrequency != config.RR15 && i == 0){
            system(config.Path15);
            i = 1;
            f = 0;
        }
        
        /* If at least a game is running, then set the f flag to 0. */
        if(hwndgame1 != NULL || hwndgame2 != NULL || hwndgame3 != NULL || hwndgame4 != NULL || hwndgame5 != NULL || hwndgame6 != NULL || hwndgame7 != NULL || hwndgame8 != NULL || hwndgame9 != NULL || hwndgame10 != NULL || hwndgame11 != NULL || hwndgame12 != NULL || hwndgame13 != NULL || hwndgame14 != NULL || hwndgame15 != NULL){
            f = 0;
        }
        
        /* If no games are running, then set the i flag to 0. */
        if(hwndgame1 == NULL && hwndgame2 == NULL && hwndgame3 == NULL && hwndgame4 == NULL && hwndgame5 == NULL && hwndgame6 == NULL && hwndgame7 == NULL && hwndgame8 == NULL && hwndgame9 == NULL && hwndgame10 == NULL && hwndgame11 == NULL && hwndgame12 == NULL && hwndgame13 == NULL && hwndgame14 == NULL && hwndgame15 == NULL){
            i = 0;
        }
        
        /* If no games are running and the current refresh rate is different from "RRNoGame", then display a warning, set the i flag to 0, and the f flag to 1. */
        if((hwndgame1 == NULL && hwndgame2 == NULL && hwndgame3 == NULL && hwndgame4 == NULL && hwndgame5 == NULL && hwndgame6 == NULL && hwndgame7 == NULL && hwndgame8 == NULL && hwndgame9 == NULL && hwndgame10 == NULL && hwndgame10 == NULL && hwndgame11 == NULL && hwndgame12 == NULL && hwndgame13 == NULL && hwndgame14 == NULL && hwndgame15 == NULL) && monitorProperties->dmDisplayFrequency != config.RRNoGame && f == 0){

            system(config.PathNoGame);
            i = 0;
            f = 1;
        }
        Sleep(5000); // Wait 5 seconds.
    }
    /* RRwarning end */
    
    return (EXIT_SUCCESS);
}
