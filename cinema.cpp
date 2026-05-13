#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxDistToClosest(vector<int>& seats) {
    int last = -1;
    int ans = 0;

    for (int i = 0; i < seats.size(); i++) {
        if (seats[i] == 1) {
            if (last == -1)
                ans = i;
            else
                ans = max(ans, (i - last) / 2);

            last = i;
        }
    }
    ans = max(ans, (int)seats.size() - 1 - last);

    return ans;
}

int main() {
    vector<int> seats = {1, 0, 0, 0, 1, 0, 1};

    cout << maxDistToClosest(seats);

    return 0;
}
