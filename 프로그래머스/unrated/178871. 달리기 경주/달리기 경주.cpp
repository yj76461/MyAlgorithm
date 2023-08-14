#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string, int> name;
    map<int, string> rank;
    
    for(int i = 0; i < players.size(); i++){
        name[players[i]] = i;
        rank[i] = players[i];
    }
    
    for(int i = 0; i < callings.size(); i++){
        string fr = rank[name[callings[i]] - 1];
        name[callings[i]] -= 1;
        rank[name[callings[i]]] = callings[i];
        name[fr] += 1;
        rank[name[callings[i]] + 1] = fr;
        
    }
    for(auto iter = rank.begin(); iter != rank.end(); iter++){
        //cout << iter -> second << " ";
        answer.push_back(iter -> second);
    }
    return answer;
}