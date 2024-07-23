#include <stdlib.h>
#include "dog.h"

	/**
	* free_dog - frees dog
	* @d: pointer to the dog to be freed
	*/void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
