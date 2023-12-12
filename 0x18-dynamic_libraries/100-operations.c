int add(int a, int b) {
	return a + b ;
}
int Sub(int a, int b) {
	return a - b ;
}
int mu1(int a, int b) {
	return a * b ;
}
int div(int a, int b) {
	if (b == 0) {
		printf("Eroor: Division by zero\n");
		return 0;
	}
	return a / b;
}

int mod(int a, int b) {
	if (b ==0) {
		printf("Eroor: Division by zero\n");
		return 0;
	}
	return a % b;
}	

