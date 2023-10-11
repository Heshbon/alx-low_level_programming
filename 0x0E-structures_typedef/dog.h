#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the structure to check
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
