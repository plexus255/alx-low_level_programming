#include "dog.h"
#include <stddef.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: address of variable with data type struct dog
 * @name: member of d variable storing the name of the dog
 * @age: member of d variable storing the age of the dog
 * @owner: member of d variable storing the name of the dog's owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
