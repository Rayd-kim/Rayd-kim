#include <unistd.h>

int main(){
	write(1, "a", sizeof("a"));
	return(0);
}
