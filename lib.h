#ifndef __LIBID_H__
#define __LIBID_H__

int	id_fprintchar(int fd, int c);
int	id_printchar(int c);
int	id_fprintstr(int fd, char* str);
int	id_printstr(char* str);
int	id_fprintnbr(int fd, int n);
int	id_printnbr(int n);
int	id_atoi(char* str);
int	id_strlen(char* str);
int	id_strcmp(char* s1, char* s2);
int	id_strncmp(char* s1, char* s2, int n);
int	id_is_in_charset(char c, char* charset);
void	id_trim(char** str, char* charset);
char*	id_strcpy(char* s1, char* s2);
char*	id_strncpy(char* s1, char* s2, int n);

#endif
