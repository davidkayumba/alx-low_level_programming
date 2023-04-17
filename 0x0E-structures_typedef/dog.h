#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 *
 * @name: Name of a dog
 * @age: Age of a dog
 * @owner: Dog's owner
 *
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void int_dog(struct *d, char *name, char *owner, float age);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, char *owner, float age);
void free_dog(dod_t *d);

#endif
