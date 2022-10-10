#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: char pointer to the new dog name
 * @age: new dog age
 * @owner: char pointer to the new dog owner
 * Return: a new dog with type dog_t or
 * NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, NameLenght, OwnerLenght;
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	NameLenght = OwnerLenght = 0;
	while (name[NameLenght++])
		;
	while (owner[OwnerLenght++])
		;
	dog->name = malloc(NameLenght * sizeof(dog->name));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= NameLenght; i++)
		dog->name[i] = name[i];
	dog->age = age;
	dog->owner = malloc(OwnerLenght * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= OwnerLenght; i++)
		dog->owner[i] = owner[i];
	return (dog);
}

