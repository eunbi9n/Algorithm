#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (int i = 0; i < commands.size(); i++) {
        vector<int> newArr(commands[i][1] - commands[i][0] + 1);
        copy(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1], newArr.begin());
        sort(newArr.begin(), newArr.end());
        answer.push_back(newArr[commands[i][2] - 1]);
    }
    return answer;
}
