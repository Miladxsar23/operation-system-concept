#include <iostream>
#include <stdio.h>
#include <unistd.h>
using namespace std;


int main(int argc, char** argv) {
	int pid = fork();
	//child process run
	if(pid == 0) {
		cout << "hi i am child process with pid: " << (int) getpid() << endl;

	}else {
		cout << "hi i am a parent process with pid: " << (int) getpid() << endl;
	}

	return 0;
}
