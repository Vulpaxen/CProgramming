#include <stdio.h>

	struct birthDate{
		int date;
		char month[25];
		int year;
	};

	struct address{
		char streetName[100];
		int streetNumber;
		char city[100];
		char province[100];
	};
	
	struct student{
		int studentNumber;
		char Name[100];
		struct address;
		char birthPlace[100];
		struct birthDate;
	};
