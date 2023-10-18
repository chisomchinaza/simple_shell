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
void _envprinter(char **env);
void _exectutor_printer(const char *cmdliner);
void input(char **point, size_t *c);
void output(void);
int _printfs(const char *stringers);
int _putchar(char characterss);
ssize_t getter(char **bufs, size_t *siss);
#endif
