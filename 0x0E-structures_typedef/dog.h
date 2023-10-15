#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - DOG Entity
 * @name: dog name.
 * @age: dog age
 * @owner: dog owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /*ifndef dog */
