#include <iostream>
#include <stdio.h>
#include <unistd.h>
//wait lib
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char** argv) {
	int pid = fork();
	if(pid == 0 ) {
		for(int i = 0; i < 100; i++)
			cout << i << endl;
	}else {
		int status;
		pid_t childPid = wait(&status);
		for(int i = -100; i  < 0; I++)
			cout << i << endl;
	}

	return 0;
}
