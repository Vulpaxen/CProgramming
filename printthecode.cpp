#include <stdio.h>

int main(){
	char thestring[100];
	scanf("%[^\n]", &thestring);
	printf("#include <stdio.h>\nint main()\n{\n    printf(\"%%s\\n\",\"%s\");\n    return 0;\n}\n", thestring);
	return 0;
}
