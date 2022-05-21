#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
using namespace std;

int main(int argc, char **argv) {
	int pid = fork();
	if(pid < 0) {
		cout << "error : " << stderr << endl;
		exit(1);
	}else if (pid == 0) {
		cout << "i am a child process width pid: " << (int) getpid() << endl;
		char *myArgs[3];
		myArgs[0] = strdup("wc");
		myArgs[1] = strdup("fork.cpp");
		myArgs[2] = NULL;
		execvp(myArgs[0], myArgs);
		cout << "this shouldent print out" << endl;
	}else {
		int wc = wait(NULL);
		cout << "i am a parent again" << endl;
	}
	return 0;
}
