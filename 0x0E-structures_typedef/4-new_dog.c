#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string.
 * @s: String to evaluate.
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - Copy the string pointed to by src
 * that includes the terminating null byte (\0)
 * to the buffer pointed to by the  dest.
 * @dest: Pointer to the buffer in which we copy the string.
 * @src: String to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Create a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
