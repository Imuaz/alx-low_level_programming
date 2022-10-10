#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>
/*
 * File: dog.h
 * Authr: Idris Muazu Yakub
 * Desc: Header file that defines a new type struct dog
 */

/**
 * struct dog-new type describing a dog
 * @name: the name of the dog
 * @age: The dog age
 * @owner: the dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - A typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
