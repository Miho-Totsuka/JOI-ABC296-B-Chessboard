#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> s(8); // std::string が何個かstd::vectorの中に入っていると考える
    for(auto & e:s)
    {
        std::cin >> e;
    }
    std::string alphabet = "abcdefgh"; // 位置を示す時に使う
    for(int j = 0; j < 8; ++j) // board[row][col]
    {
        for(int i = 0; i < 8; ++i)
        {
            if(s[j][i] == '*') //もし*だったらアルファベットを出力し、数字も出力する
            {
                std::cout << alphabet[i] << 8-j << "\n";
                return 0; // 見つかったら、プログラムを終わる
            }
        }
    }
}
