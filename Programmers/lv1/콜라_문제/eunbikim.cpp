#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while (n >= 2 && (n / a) != 0) {
        answer += (n / a) * b;
        n = (n % a) + (n / a) * b;
    }
    return answer;
}
