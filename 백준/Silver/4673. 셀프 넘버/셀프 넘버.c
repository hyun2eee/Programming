#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int * get_generators() {

	static int List[10001] = { 0, }; // 배열 생성
	int generator = 0;
	int n = 1;
	
	while (generator <= 10000) {
		++generator; // for문을 안쓰기 위해 generator을 1씩 증가
		int num1 = generator % 10; //1의 자리
		int num2 = (generator % 100) / 10; // 10의자리
		int num3 = (generator % 1000) / 100; // 100의자리
		int num4 = (generator / 1000) % 10; // 1000의자리
		int num5 = generator / 10000; // 10000의자리

		n = generator + num1 + num2 + num3 + num4 + num5; //gnerator은 n의 생성자 n은 생성자를 가짐

		++List[n]; 

		//return List;
	}
	return List;
}

int main() {

	int* nums = get_generators();

	for (int i = 1; i < 10001; i++) {
		if (nums[i] == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}