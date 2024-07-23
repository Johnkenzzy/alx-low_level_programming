#include <stdlib.h>
#include <string.h>
#include "dog.h"

	/**
	* new_dog - creates a new dog from dog_t
	* @name: new dog name
	* @age: new dog age
	* @owner: new dog owner
	*/dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *new_name;
	char *new_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	new_name = malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(new_name, name);

	new_owner = malloc(sizeof(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(dog);
		return (NULL);
	}
	strcpy(new_owner, owner);

	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;

	return (dog);
}
