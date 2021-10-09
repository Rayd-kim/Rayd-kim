:#include <unistd.h>

void b()
{
	write(1, "B", 1);
	b();
}

void a(int x)
{
	int k = x/x;
	write(1, "A", 1);
	write(1, b(), x-2);
	write(1, "A", x-(x-1));	
}







int main()
{
	a(5);
	write(1, "\n", 1);
	return 0;
}
