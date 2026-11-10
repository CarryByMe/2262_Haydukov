#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> v(n); 
    
    for(int &vi : v){       
        std::cin >> vi;    
    }

    int lst = v[n-1];
    for(int &vi : v){       
        vi = vi + lst;
    }

    int cntN = 0;
    int cntP = 0;

    for(int &vi : v){
        if(vi > 0)cntP++; 
        else if(vi < 0) cntN++;
            
    }

    std::cout << cntP << " " << cntN;


}
