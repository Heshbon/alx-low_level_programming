#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -  a function that creates a new dog
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 * Return: the pointer of the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, c;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (a = 0; name[a] != '\0'; a++)
		;
	a++;
	dog->name = malloc(sizeof(char) * (a + 1));
	if (dog->name == NULL)
	{
		return (NULL);
		free(dog);
	}
	for (c = 0; c < a; c++)
		dog->name[c] = name[c];
	dog->age = age;
	for (b = 0; owner[b] != '\0'; b++)
		;
	b++;
	dog->owner = malloc(sizeof(char) * (b + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	for (c = 0; c < b; c++)
		dog->owner[c] = owner[c];
	return (dog);
}
