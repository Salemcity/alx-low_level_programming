#ifndef DOG_H
#define DOG_H

	/**
	 * struct dog - dog class
	 * @name: Dog name
	 * @age: Dog age
	 * @owner: Dog owner
	 *
	 * Description: Longer description
	 */

struct dog_h

{
char *name;
float age;
char *owner;
};

void init_dog_h(struct dog_h *d, char *name, float age, char *owner);
void print_dog(struct dog_h *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
