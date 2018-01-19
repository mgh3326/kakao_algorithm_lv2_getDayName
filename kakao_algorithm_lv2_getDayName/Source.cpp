#include<iostream>
#include<string>
using namespace std;

string getDayName(const int a, const int b)//1월1일은 금요일이다.
{
	int month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };//이거 날짜 세는거 잘못 새서 틀렸었음
	string day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	auto val1 = 0;
	for (auto i = 0; i < a - 1; i++)
	{
		val1 += month[i];
	}
	//cout << val1 << endl;
	//val1 += b;

	//val1 %= 7;
	//cout << day[5] << endl;
	string answer = day[(4 + b + val1) % 7];
	//cout << val1 << endl;
	return answer;
}
int main()
{
	const auto a = 5;
	const auto b = 24;

	//아래는 테스트 출력을 위한 코드입니다. 
	cout << getDayName(a, b);
}
//2016년 1월 1일은 금요일입니다. 2016년 A월 B일은 무슨 요일일까요 ? 두 수 A, B를 입력받아 A월 B일이 무슨 요일인지 출력하는 getDayName 함수를 완성하세요.요일의 이름은 일요일부터 토요일까지 각각
//
//SUN, MON, TUE, WED, THU, FRI, SAT
//
//를 출력해주면 됩니다.예를 들어 A = 5, B = 24가 입력된다면 5월 24일은 화요일이므로 TUE를 반환하면 됩니다.