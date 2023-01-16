#ifndef _HEADER_
#define _HEADER_
/**
 *struct dog - structure of the programe
 *@name: store name of the dog
 *@age: store age of the dog
 *@owner: store owner of the dog
 *
 *Description: attribute of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog;
#endif
