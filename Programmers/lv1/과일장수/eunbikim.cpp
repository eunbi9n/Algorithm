#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int sum = 0;
    sort(score.begin(), score.end(), greater<>());
    for (int i = 0; i < (score.size() / m); i++) {
        vector<int> temp = {score.begin() + (m * i), score.begin() + (m * i) + m};
        sum += temp[m - 1] * m;
    }
    return sum;
}
