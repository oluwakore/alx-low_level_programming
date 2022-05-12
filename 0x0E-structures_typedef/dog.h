#ifndef _DOG_H
#define _DOG_H

/**
 *struct dog - dog desc
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
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
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);

#endif
