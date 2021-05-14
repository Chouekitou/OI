#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int n, mencount, maxscore = -999999;
map<string, int> namemap;

struct player {
    string name;
    int score, time, maxscore;
};

map<int, player> scoremap;
// vector<int> pos;
int pos[1010];

struct input {
    string name;
    int score;
};
vector<input> in;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string name;
        int score;
        cin >> name >> score;
        input t;
        t.name = name, t.score = score;
        in.push_back(t);
        if (namemap.find(name) == namemap.end()) {
            mencount += 1;
            namemap[name] = mencount;
            scoremap[namemap[name]].score = score;
            scoremap[namemap[name]].time = i;
            scoremap[namemap[name]].name = name;
        } else {
            if (score > 0) {
                scoremap[namemap[name]].score += score;
                if (scoremap[namemap[name]].score >
                    scoremap[namemap[name]].maxscore) {
                    scoremap[namemap[name]].maxscore =
                        scoremap[namemap[name]].score;
                    scoremap[namemap[name]].time = i;
                }
            } else {
                scoremap[namemap[name]].score += score;
            }
        }
    }
    for (int i = 1; i <= mencount; i++) {
        maxscore = max(maxscore, scoremap[i].score);
    }
    for (int i = 1; i <= mencount; i++) {
        if (scoremap[i].score == maxscore)
            pos[i] = 1;
    }
    int mintime = 9999, minpos = 0;
    int score[1000] = {};
    for (int i = 1; i <= n; i++) {
        score[namemap[in[i - 1].name]] += in[i - 1].score;
        if (score[namemap[in[i - 1].name]] >= maxscore) {
            if (i < mintime && (pos[namemap[in[i - 1].name]] != 0)) {
                minpos = i;
                mintime = i;
            }
        }
    }
    // cout<<in.size();
    cout << in[minpos - 1].name << endl;
    // cout<<minpos<<" "<<mintime;
    return 0;
}