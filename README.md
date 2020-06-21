##Welcome to this C Language Course
###Lesson 18: Using Alias

The use of an alias consists of "rename" the type of some variables into an equivalent tag, to close them to the natural language and give the variables a context. This feature is useful when your code grows in complexity and volume, and invoking variables and their types are easier if you previously link them to simple names.

This repo contains two files:

- pointer_to_struct.c
- alias.c

The file pointer_to_struct.c was written on the Lesson 19 and the use of alias was not implemmented.

```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct PERSON {
	char name[100];
	int age;
	};

```

Meanwhile, the file alias.c is the same code as pointer_to_struct.c with using alias.

```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char NAME[100];
typedef int AGE;

struct PERSON {
	NAME name;
	AGE age;
	};
```

This class was conducted by Mauro Chojrin. Please, go to his GitHub account and follow him. https://github.com/mchojrin
