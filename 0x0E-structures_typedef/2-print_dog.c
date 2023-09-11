#include "dog.h"
/**
 * print_dog - print dog Object
 * @d: pointer to the struct
 * Return:void
 */
void print_dog(struct dog *d)
{
	char nil[5] = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : nil);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : nil);
	}
}
