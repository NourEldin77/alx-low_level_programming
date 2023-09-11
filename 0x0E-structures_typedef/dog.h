#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Dog Object
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: the properties of the Dog object
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - alias for struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
