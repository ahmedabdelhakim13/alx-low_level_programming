#include <stdio.h>
#include "dog.h"

/**
 *print_dog - function prints struct dog
 *@d: pointer to structure
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name is: %s\n", d->name);
		else
			printf("NAme: (Nill)"\n);
		printf("age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (Nill)\n");
	}
}

