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


int main(){
    int t;
    cin >> t;
     
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int out = 0;
        for(int j = 0; j < n; j++){
            if(j % 5 == 0 || j % 3 == 0){
                out += j; 
            }
        }
        cout << out << endl; 
        
    }
    return 0;
}
