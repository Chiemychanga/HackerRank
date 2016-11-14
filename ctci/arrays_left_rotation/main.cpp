#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> array_left_rotation(vector<int> a, int n, int k) {
    vector<int> result(n);
    for(int a_i = 0; a_i < n; a_i++) {
        result[a_i] = a[(a_i+k)%n];
    }
    return result;
}

int main(){
    int n;
    int k;
    cout << "\nNumber of integers: ";
    cin >> n ;
    cout << "\nNumber of left rotations:";
    cin >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cout << "\nEnter the integer at index[" << a_i << "]: ";
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}

