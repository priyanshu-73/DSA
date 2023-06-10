#include<bits/stdc++.h>
using namespace std;

bool isSafe(int x, int y, vector<vector<int>> visited, vector<vector<int>> &arr){
    int n  = arr.size();
    if((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && arr[x][y] == 1){
        return true;
    }
    else{
        return false;
    }
}

void solve(vector<vector<int>> arr, vector<string>& ans, int n, int x, int y, vector<vector<int>> visited, string path){
    if(x == n - 1 && y == n - 1){
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;

    //down
    int newx = x + 1;
    int newy = y;
    if(isSafe(newx, newy, visited, arr)){
        path.push_back('D');
        solve(arr, ans, n, newx, newy, visited, path);
        path.pop_back();
    }

    //up
    newx = x - 1;
    newy = y;
    if(isSafe(newx, newy, visited, arr)){
        path.push_back('U');
        solve(arr, ans, n, newx, newy, visited, path);
        path.pop_back();
    }

    //right
    newx = x;
    newy = y + 1;
    if(isSafe(newx, newy, visited, arr)){
        path.push_back('R');
        solve(arr, ans, n, newx, newy, visited, path);
        path.pop_back();
    }

    //left
    newx = x;
    newy = y - 1;
    if(isSafe(newx, newy, visited, arr)){
        path.push_back('L');
        solve(arr, ans, n, newx, newy, visited, path);
        path.pop_back();
    }
    visited[x][y] = 0;
}

vector<string> naughtyRat(vector<vector<int>> arr){
    int n = arr.size();
    int x = 0;
    int y = 0;
    vector<string> ans;
    if(arr[0][0] == 0){
        return ans;
    }
    vector<vector<int>> visited = arr;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            visited[i][j] = 0;
        }
    }
    string path = "";
    solve(arr, ans, n, x, y, visited, path);
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<vector<int>> arr = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 1}, {0, 1, 1, 1}};
    vector<string> ans = naughtyRat(arr);
    for(auto it : ans){
        cout << it << " ";
    }
}