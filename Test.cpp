#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	if (argc > 1)
		printf("Hello %s!\n", argv[1]);
	else
		printf("Hello World\n");
}
