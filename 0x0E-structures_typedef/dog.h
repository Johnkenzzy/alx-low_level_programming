#ifndef DOG_H
#define DOG_H

/**
* struct dog - contains the data of dog
*
* @name: dog name
* @age: age of the dog
* @owner: owner of the dog
*
* Description: this struct data type stores the information of a dog
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
