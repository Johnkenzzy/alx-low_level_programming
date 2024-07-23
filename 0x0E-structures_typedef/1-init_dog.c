	/**
	* init_dog - initialize a variable of type struct dog
	*
	* @struct dog: struct name
	* @name: name of dog
	* @age: age of dog
	* @owner: dog's owner
	*/void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
