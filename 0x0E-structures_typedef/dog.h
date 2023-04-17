#ifndef DOG_H
#define DOG_H

/**
 *struct dog - information of a dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *description: longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_d typedef for struct dog
 *
 */
typedef struct dog dog_d;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


dog_d *new_dog(char *name, float age, char *owner);

void free_dog(dog_d *d);

#endif
