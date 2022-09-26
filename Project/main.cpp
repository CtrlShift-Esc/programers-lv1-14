#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
	long long answer = 0;
	int s = a > b ? b : a;
	int e = a > b ? a : b;
	for (int i = s; i <= e; i++)
		answer += i;
	return answer;
}

void main()
{
	//test
	//auto ret = solution(5, 3);
}