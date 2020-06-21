#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char NAME[100];
typedef int AGE;

struct PERSON {
	NAME name;
	AGE age;
	};

void fillPersonData( struct PERSON *person, const char *name, int age ){

	if (strlen ( name ) < 100 ){

		strcpy( person->name, name );

		}

		 person->age = age;

		}

int main( int argc, const char *argv[] ){

	struct PERSON person;

	if (argc < 3){

		printf("¡Indique nombre y edad, por favor!\n");

		return 1;
		}

	fillPersonData( &person, argv[1], atoi( argv[2] ));

	printf("Name = %s, age = %d\n", person.name, person.age );

	return 0;
}