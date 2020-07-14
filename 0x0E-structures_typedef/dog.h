#ifndef DOG
#define DOG

/**
 * struct dog - Data dog.
 * @name: mame dog.
 * @age: age dog.
 * @owner: owner dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
