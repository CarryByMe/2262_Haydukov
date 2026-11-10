    #include <iostream>
    #include <vector>

    int main() {
        int n, m;
        std::cin >> n >> m;
        
        std::vector<std::vector<int>> a(n, std::vector<int>(m));
        
    
        for (int i = 0, j = 0; i < n; ) {
            std::cin >> a[i][j];
            if (++j == m) {
                j = 0;
                ++i;
            }
        }
        

        int s = 0;
        for (int i = 0, j = 0; i < n; ) {
            s += a[i][j];
            if (++j == m) {
                j = 0;
                ++i;
            }
        }
        
        std::cout << s;
        

    }