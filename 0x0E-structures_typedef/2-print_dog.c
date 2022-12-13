#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints all member info of a struct dog
<<<<<<< HEAD
 * @d: a vairable of type struct dog
=======
 * @d: a variable of type struct dog
>>>>>>> 7fec5e2baf2c78f62a5acef58dd5aa70a035ee92
 */

void print_dog(struct dog *d)
{

<<<<<<< HEAD
	if (d == NULL) /* validate if d initiated correctly*/
		return;

	(d->name == NULL) ? printf("Name: (nil)\n")
		:printf("Name: %s\n", d->name);
=======
	if (d == NULL) /* validate if d initiated correctly */
		return;

	(d->name == NULL) ? printf("Name: (nil)\n")
		: printf("Name: %s\n", d->name);

>>>>>>> 7fec5e2baf2c78f62a5acef58dd5aa70a035ee92
	printf("Age: %f\n", d->age);

	(d->owner == NULL) ? printf("Owner: (nil)\n")
		: printf("Owner: %s\n", d->owner);
<<<<<<< HEAD
=======

>>>>>>> 7fec5e2baf2c78f62a5acef58dd5aa70a035ee92
}
