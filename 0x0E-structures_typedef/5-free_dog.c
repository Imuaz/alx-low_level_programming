#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: dog of type dog_t pointer
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
