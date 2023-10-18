#ifndef SHELL_H
#define SHELL_H

/*
 * shell.h: this program contains all the
 * functions prototypes and constants.
 *
 * Return: 0 as always
 */

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <stdlib.h>

/* the function prototypes */



void run_shell(void);
void print_environment(char **printev);
void exit_handling(void);
void input_tokenizing(char *input, char **tokens);
void *get_command_path(char *command);


int _putchar(char charact);
int _printf(const char *string);
void prompt(void);
void executor(const char *cmd);
void usercmd(char **cmd, size_t *s);
void envprint(char **env);
ssize_t _getlines(char **buffer, size_t *static_size);


#endif
