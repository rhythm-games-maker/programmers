#include <iostream>

using namespace std;

bool is(int n) {
	switch (n % 10)	{
	case 1: case 3: case 7: case 9:
		switch (n%12) {
		case 1: case 5: case 7: case 11:
			if (n % 3 == 0) { return false; }
			int i = 7;
			while (i*i <= n) {
				if (n%i == 0) { return false; }
				i += 2;
			}
			return true;
		}
	}
	return false;
}

int solution(int n) {
	int answer = 4;
	if (n == 2) { return 1; }
	else if (n < 5) { return 2; }
	else if (n < 7) { return 3; }
	else if (n <= 10) { return 4; }
	for (int i = 11; i <= n; i += 2) {
		if (is(i)) {
			answer++;
		}
	}
	return answer;
}
