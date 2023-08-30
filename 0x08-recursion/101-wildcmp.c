#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 0
 */
int wildcmp(char *sl, char *s2)

{
	if (*sl == '\0' && *s2 == '\0')
		return (1);

	if (*sl == *s2)
		return (wildcmp(sl + 1, s2 + 1));

	if (*s2 == '*')
	{
		if (*s2 == '*' && *(s2 + 1) != '\0' && *sl == '\0')
			return (0);
		if (wildcmp(sl, s2 + 1) || wildcmp(sl + 1, s2))
			return (1);
	}
	return (0);
}
