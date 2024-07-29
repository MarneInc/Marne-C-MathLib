const float pi = 3.1415926535;

float sum(float a, float b) {
	float result = a;
	for (int i = 0; i < b; i++) {
		result += 1;
	}
	return result;
}

float minus(float a, float b) {
	float result = a;
	for (int i = 0; i < b; i++) {
		result -= 1;
	}
	return result;
}

float times(float a, float b) {
	float result = a;
	for (int i = 1; i < b; i++) {
		result += a;
	}
	return result;
}

float division(float a, float b) {
	if (a >= b) {
		float result = 0;
		while (a != 0) {
			a -= b;
			result += 1;
		}
		return result;
	} else if (a < b) {
		float result = 0;
		int count = 1;
		while (a < b) {
			a *= 10;
			count += 1;
		}

		while (a != 0) {
			a -= b;
			result += 1;
		}

		while (count > 1) {
			result /= 10;
			count -= 1;
		}
		return result;
	}
}

float poww(float a, float b) {
	if (b > 0) {
		float result = a;
		for (int i = 1; i < b; i++) {
			result *= a;
		}
		return result;
	} else if (b < 0) {
		float result = a;
		for (int i = 1; i > b; i--) {
			result /= a;
		}
		return result;
	} else {
		return 1;
	}
}

float sqroot(float number) {
	float root = number / 2;

	for (int i = 0; i < 10; i++) {
		root = (root + number / root) / 2;
	}
	return root;
}

float fibo(float a, float b, float array[], int size) {
	float c;
	for (int i = 0; i < size; i++) {
		c = a + b;
		array[i] = c;
		a = b;
		b = c;
	}
}
