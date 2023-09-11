#include "dog.h"
/**
 * init_dog - giving valuse for the dog object "or any object"
 * @d: ref to the object "struct"
 * @name: name to init
 * @age: age ot init
 * @owner: owner to init
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
