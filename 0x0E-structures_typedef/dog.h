#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's basic info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void printDogInfo(struct dog myDog);

#endif /* DOG_H */

