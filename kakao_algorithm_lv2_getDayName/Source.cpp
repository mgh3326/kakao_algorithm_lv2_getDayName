#include<iostream>
#include<string>
using namespace std;

string getDayName(const int a, const int b)//1��1���� �ݿ����̴�.
{
	int month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };//�̰� ��¥ ���°� �߸� ���� Ʋ�Ⱦ���
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

	//�Ʒ��� �׽�Ʈ ����� ���� �ڵ��Դϴ�. 
	cout << getDayName(a, b);
}
//2016�� 1�� 1���� �ݿ����Դϴ�. 2016�� A�� B���� ���� �����ϱ�� ? �� �� A, B�� �Է¹޾� A�� B���� ���� �������� ����ϴ� getDayName �Լ��� �ϼ��ϼ���.������ �̸��� �Ͽ��Ϻ��� ����ϱ��� ����
//
//SUN, MON, TUE, WED, THU, FRI, SAT
//
//�� ������ָ� �˴ϴ�.���� ��� A = 5, B = 24�� �Էµȴٸ� 5�� 24���� ȭ�����̹Ƿ� TUE�� ��ȯ�ϸ� �˴ϴ�.