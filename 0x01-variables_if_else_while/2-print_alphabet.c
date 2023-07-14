 
0x01-variables_if_else_while/1-last_digit.c
@@ -13,7 +13,7 @@ int main(void)
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = rand() -( RAND_MAX / 2);
	lastDigit = n % 10;
	printf("Last digit of %d is %d and is ", n, lastDigit);
	if (lastDigit > 5)
