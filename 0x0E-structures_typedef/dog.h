#ifndef DOG
#define DOG

	/**
	 * struct dog - dog class
	 * @name: Dog name
	 * @age: Dog age
	 * @owner: Dog owner
	 *
	 * Description: Longer description
	 */
{

char *name = "Bobby";
float age = 1.5;
char *owner = "Gbemzy";

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
