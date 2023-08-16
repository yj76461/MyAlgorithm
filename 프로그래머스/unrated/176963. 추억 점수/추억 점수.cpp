#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    map<string, int> score;
    for(int i = 0; i < name.size(); i++){
        score[name[i]] += yearning[i];
    }
    vector<int> answer;
    for(int i = 0; i < photo.size(); i++){
        int tmp = 0;
        for(int j = 0; j < photo[i].size(); j++){
            tmp += score[photo[i][j]];
        }
        answer.push_back(tmp);
    }
    return answer;
}