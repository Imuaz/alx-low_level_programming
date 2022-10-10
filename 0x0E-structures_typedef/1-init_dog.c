# include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: pointer to an element of a type dog
 * @name: the dog name.
 * @age: the dog age.
 * @owner: the dog owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
