#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 *
 * Description: defines a dog structure with its name, age, and owner's name.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

#endif /* DOG_H */
