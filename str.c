#include "shell.h"

/**
 * _strcmp - concatenating strings to output length
 * @s1: length of strings
 * @s2: length of strings
 * Return: succes or error
 */

int _strcmp(char *s1, char *s2)
{
	int concatStr;
	int concatLength = 0;

	for (concatStr = 0; s1[concatStr] != '\0' && concatLength == 0; concatStr++)
	{
		concatLength = s1[concatStr] - s2[concatStr];
	}

	return (concatLength);
}

/**
 * _strdup - string
 * @str: string
 * Return: success or error
 */


char *_strdup(const char *str)
{
	char *ptr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		len++;
		str++;
	}
	str = str - len;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		ptr[i] = str[i];
	return (ptr);
}

/**
 * _strcpy - string copying from one to another
 * @dest: the string of the function
 * @src: the string function
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	char *pointerDest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (pointerDest);
}

/**
 * _strlen - check the for the length of a string
 * @s: pointer value a
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int stringLength = 0;

	while (s[stringLength] != '\0')
	{
		stringLength++;
	}
	return (stringLength);
}

/**
 * _strcat - concatenating two strings.
 * @dest: the string of the function
 * @src: the string of the function
 * Return: success or error
 */

char *_strcat(char *dest, char *src)
{
	char *pointerResult = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (pointerResult);
}
