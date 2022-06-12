/*[평가항목 1]: 과제 설명

컴퓨터프로그래밍 평가과제 (배점 25점)
학과:컴퓨터공학부
학번:202201780
이름:성지은

과제주제: 지역별 코로나 확진자 현황

*/

#include <stdio.h>
#include "city.c" //[평가항목 8] : 다중 소스 파일 사용

void print_stars() { //[평가항목 2] : 함수 사용
	for (int i = 0; i < 40; i++)
	printf("*");
}

int main(void) {
	int total_count = 0;

	struct city seoul = { "서울", 0 }; //[평가항목 5] : 구조체 사용
	struct city busan = { "부산", 0 };
	struct city daegu = { "대구", 0 };
	struct city incheon = { "인천", 0 };
	struct city gwangju = { "광주", 0 };
	struct city daejeon = { "대전", 0 };
	struct city ulsan = { "울산", 0 };
	struct city jeju = { "제주", 0 };
	struct city cities[] = { seoul, busan, daegu, incheon, gwangju, daejeon, ulsan, jeju }; //[평가항목 3] : 배열 사용

	struct city* pointer; //[평가항목 4] : 포인터 사용
	pointer = &cities;

	int i;
	                         

	for (i = 0; i < 8; i++) {
		int count = 0;
		printf("%s 지역의 확진자 수를 입력하시오: ", (pointer+i)->name); //[평가항목 6] : 포인터 활용 // [평가항목 7] : 파일 입출력
		scanf_s("%d", &count);
		cities[i].covid_count = count;
	}

	for (i = 0; i < 8; i++) {
		total_count += (pointer+i)->covid_count; //[평가항목 6] : 포인터 활용
	}
	print_stars(); //[평가항목 2] : 함수 사용
	printf("\n오늘 총 확진자 수는 %d명입니다.\n", total_count);
	print_stars();

	return 0;
}