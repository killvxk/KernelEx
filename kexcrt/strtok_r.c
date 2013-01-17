/*
 * strtok_r.c
 */

char *strsep(char **stringp, const char *delim);

char *strtok_r(char *s, const char *delim, char **holder)
{
	if (s)
		*holder = s;

	do {
		s = strsep(holder, delim);
	} while (s && !*s);

	return s;
}
