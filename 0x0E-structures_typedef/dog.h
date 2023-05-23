#ifndef DOG_H
#define DOG_H

/**
 * struct dog- dog's basic informations
 * @name: first Member
 * @age: second Member
 * @owner: third member
 *
 * Description: longer descr
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t –type def for structure dog.
 */
typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);


#endif
