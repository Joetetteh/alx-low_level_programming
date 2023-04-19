#include <stdlib.h>
#include "dog.h"

/**
* init_dog -  a function to return dogs info
* @blackie: pointer parameter
* @name: parameter
* @age: parameter
* @owner: owner to initialize
*/

void init_dog(struct dog *blackie, char *name, float age, char *owner)
{
if (blackie == NULL)
blackie = malloc(sizeof(struct dog));
blackie->name = name;
blackie->age = age;
blackie->owner = owner;
}
