#include <sys/syscall.h>
#include <unistd.h>

#ifndef DOCKER_IMAGE
	#define DOCKER_IMAGE "hello-world"
#endif

#ifndef DOCKER_GREETING
	#define DOCKER_GREETING "Hello from Docker!"
#endif

#ifndef DOCKER_ARCH
	#define DOCKER_ARCH "amd64"
#endif

const char message[] =
	"\n"
	DOCKER_GREETING "\n"
	"Lil test.\n"
	"\n";

int main() {
	ls -a
	
	//write(1, message, sizeof(message) - 1);
	syscall(SYS_write, STDOUT_FILENO, message, sizeof(message) - 1);

	//_exit(0);
	//syscall(SYS_exit, 0);
	return 0;
}
