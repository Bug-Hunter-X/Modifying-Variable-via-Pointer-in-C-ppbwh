int main() { int x = 10; int *ptr = &x; *ptr = 20; printf("%d\n", x); //The value of x will be 20 return 0; }