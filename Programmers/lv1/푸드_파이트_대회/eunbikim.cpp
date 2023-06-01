#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string half = "";
    for (int i = 1; i < food.size(); i++) {
        for (int j = 0; j < food[i] / 2; j++) {
            half.push_back(i + '0');
        }
    }
    answer.append(half);
    answer.push_back('0');
    reverse(half.begin(), half.end());
    answer.append(half);
    return answer;
}
