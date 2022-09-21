//
//  main.cpp
//  cracking1.5
//
//  Created by Daren Sathy on 8/31/22.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool editDistanceOne(string s1, string s2) {
    int m = s1.length();
    int n = s2.length();
    
    if (abs(m-n) > 1) {
        return false;
    }
    int count = 0;
    int i = 0, j = 0;
    while (i < m && j < n) {
        if(s1[i] != s1[j]) {
            if(count == 1) {
                return false;
            }
        }
    }
}

int main() {
    
  
    return 0;
}
