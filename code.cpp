#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    set<pair<int, int>> visited;
    int x = 0, y = 0;
    int min_val = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] < min_val) {
                min_val = grid[i][j];
                x = i;
                y = j;
            }
        }
    }

    vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    int total = 0;
    while (true) {
        visited.insert({x, y});
        total += grid[x][y];
        int min_val = INT_MAX;
        pair<int, int> min_pos;
        for (auto& dir : directions) {
            int new_x = x + dir.first;
            int new_y = y + dir.second;
            if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < m && visited.count({new_x, new_y}) == 0) {
                if (grid[new_x][new_y] < min_val) {
                    min_val = grid[new_x][new_y];
                    min_pos = {new_x, new_y};
                }
            }
        }
        if (min_val == INT_MAX) {
            break;
        } else {
            x = min_pos.first;
            y = min_pos.second;
        }
    }

    cout << total << endl;

    return 0;
}


