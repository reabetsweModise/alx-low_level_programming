#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog information
 * @d_name: dog name
 * @d_age: dog age
 * @d_owner: dog owner
 * Description: Longer description
 */
struct dog
{
	char *d_name;
	float d_age;
	char *d_owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *d_name, float d_age, char *d_owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *d_name, float d_age, char *d_owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

