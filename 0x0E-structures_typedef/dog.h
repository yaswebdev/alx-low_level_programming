#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structur function .
 * @name: enter a name .
 * @age: age of somebody .
 * @owner: owner of something
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
