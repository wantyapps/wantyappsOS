#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ui/wantyui.h"

void helpMenu() {
	printf("HELP\n");
	printf("==================\n");
	printf("HELP - show this menu.\n");
	printf("EXIT - exit Command Mode.\n");
	printf("CLEAR - clear screen.\n");
};

int commandMode() {
	runUI();
	printf("Enered Command Mode.\n");
	printf("Enter \"HELP\" to show a quick help.\n");
	char commandModeCommand[10000];
	while ( 0 == 0 ) {
		printf("COMMAND>");
		fgets(commandModeCommand, 10000, stdin);
		if ( strcmp(commandModeCommand, "HELP\n") == 0 || strcmp(commandModeCommand, "help\n") == 0 || strcmp(commandModeCommand, "Help\n") == 0 ) {
			helpMenu();
		} else if ( strcmp(commandModeCommand, "EXIT\n") == 0 || strcmp(commandModeCommand, "exit\n") == 0 || strcmp(commandModeCommand, "Exit\n") == 0 ) {
			return 0;
		};
	};
}

int mainMenu() {
	char command[1000];
	system("clear");
	printf("Copyright (©) Uri Arev 2021\n");
	printf("\n");
	printf("▫─────────────────────────▫\n");
	printf("│                         │\n");
	printf("│         Options         │\n");
	printf("│                         │\n");
	printf("▫─────────────────────────▫\n");
	printf("\n\n");
	printf("*********************************\n");
	printf("* 1. Command Mode               *\n");
	printf("* 2. Credits                    *\n");
	printf("* 99. \033[91mExit\033[0m                      *\n");
	printf("*********************************\n");
	printf("\n\n");
	while ( 0 == 0 ) {	
		printf("Option> ");
		fgets(command, 1000, stdin);
		if ( strcmp(command, "Command Mode\n") == 0 || strcmp(command, "command mode\n") == 0 || strcmp(command, "Command mode\n") == 0 || strcmp(command, "command Mode\n") == 0 || strcmp(command, "1\n") == 0 ) {
			commandMode();
		} else if ( strcmp(command, "Credits\n") == 0 || strcmp(command, "credits\n") == 0 || strcmp(command, "2\n") == 0 ) {
			system("clear");
			printf("CREDITS\n\n");
			printf("Created by Uri Arev on Saturday 21 Nov.\n\n");
			printf("Press ENTER to continue");
			fgets(command, 100, stdin);
			mainMenu();
		} else if ( strcmp(command, "Exit\n") == 0 || strcmp(command, "exit\n") == 0 || strcmp(command, "99\n") == 0 ) {
			exit(0);
		} else {
			printf("Please use a valid option.\n");
		};
	};
	return 1;
}

int main() {
	system("clear");
	printf("▫─────────────────────────▫\n");
	printf("│                         │\n");
	printf("│ Welcome to WantyappsOS. │\n");
	printf("│                         │\n");
	printf("▫─────────────────────────▫\n");
	sleep(1);
	system("clear");
	printf("▫─────────────────────────▫\n");
	printf("│                         │\n");
	printf("│ Welcome to WantyappsOS. │\n");
	printf("│                         │\n");
	printf("▫─────────────────────────▫\n");
	printf("Loading...\n");
	sleep(1);
	printf("Done!\n");
	mainMenu();

	return 0;
}
