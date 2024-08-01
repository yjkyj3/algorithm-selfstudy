#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class FriendRecommendationSystem {
private:
    unordered_map<int, unordered_set<int>   > friends;

public:
    // 초기화 함수
    void init(int N) {
        friends.clear();
        for (int i = 1; i <= N; ++i) {
            friends[i] = unordered_set<int>();
        }
    }

    // 친구 추가 함수
    void add(int id, int F, int ids[]) {
        for (int i = 0; i < F; ++i) {
            friends[id].insert(ids[i]);
            friends[ids[i]].insert(id);
        }
    }

    // 친구 삭제 함수
    void del(int id1, int id2) {
        friends[id1].erase(id2);
        friends[id2].erase(id1);
    }

    // 친구 추천 함수
    int recommend(int id, int list[]) {
        unordered_map<int, int> mutualFriendsCount;
        for (int friendId : friends[id]) {
            for (int mutualFriendId : friends[friendId]) {
                if (mutualFriendId != id && friends[id].find(mutualFriendId) == friends[id].end()) {
                    mutualFriendsCount[mutualFriendId]++;
                }
            }
        }

        // 최대 힙을 만들기 위해서 priority_queue 사용
        priority_queue<pair<int, int> > pq;
        for (const auto& entry : mutualFriendsCount) {
            pq.push(make_pair(entry.second, -entry.first));  // 친구의 수가 많고 ID가 작은 순서로 정렬
        }

        int count = 0;
        while (!pq.empty() && count < 5) {
            list[count++] = -pq.top().second;
            pq.pop();
        }

        return count;
    }
};

int main() {
    FriendRecommendationSystem system;
    system.init(8);

    int friends1[] = {3};
    system.add(8, 1, friends1);

    int friends2[] = {5, 6};
    system.add(1, 2, friends2);

    int friends3[] = {2};
    system.add(1, 1, friends3);

    int friends4[] = {1, 6};
    system.add(3, 2, friends4);

    int friends5[] = {3};
    system.add(2, 1, friends5);

    int friends6[] = {8, 2};
    system.add(4, 2, friends6);

    int recommendList[5];
    int recommendCount = system.recommend(2, recommendList);
    for (int i = 0; i < recommendCount; ++i) {
        cout << recommendList[i] << " ";
    }
    cout << endl;

    return 0;
}