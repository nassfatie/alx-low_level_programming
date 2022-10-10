#ifndef _DOG_H_
#define _DOG_H_

/**
*struct dog - structure of a dog
*@name:name of a dog
*@age:age of a dog
*@owner:owner of a dog
*
*/
struct dog
{

	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;

#endif
