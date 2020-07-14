#ifndef DOG
#define DOG
/**
 * struct dog - Data dog.
 * @name: mame dog.
 * @age: age dog.
 * @owner: owner dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
