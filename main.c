//Elemental Package Manager: main.c
//by Corwin McKnight

#include <stdio.h>

void printHelp(char* usage_exename)
{
	printf("Elemental Package Manager (epm)\n");
	printf("\tUsage: %s [command] {arguments}\n",usage_exename);
	printf("Avalable Commands:\n");
	printf("install: Installs Packages\n");
	printf("get:\t Retrieves Packages\n");
	printf("update:\t Updates Packages\n");
	printf("upgrade: Upgrades Packages\n");
	printf("remove:\t Removes Packages\n");
}

int main(int argc, char **argv)
{
	//TODO: GET OPTIONS
	int realargc=argc-1;
	if(!realargc)
	{
		printHelp(argv[0]);
	}
	//TODO: INTERPET OPTIONS
	//TODO: GET PACKAGE
	//TODO: READ PACKAGE
	//TODO: DO STUFF TO PACKAGE
	//TODO: YEAHHHHH
}
