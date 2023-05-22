#include <string>
#include <cctype>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    int temp;
    for (int i = 0; i < s.length(); i++) {
		// 나머지 연산을 이용해 푸는 방법 존재
		// answer.push_back('a' + (s[i] + n - 'a') % 26);
		// 훨씬 간단하고 좋은 듯!
        temp = s[i];
        if (isupper(temp)) {
            temp += n;
            if (temp > 'Z') temp = 'A' + (temp - 'Z' - 1);
        }
        else if (islower(temp)) {
            temp += n;
            if (temp > 'z') temp = 'a' + (temp - 'z' - 1);
        }
        answer.push_back(temp);
    }
    return answer;
}
