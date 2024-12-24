class Solution {
public:
    string intToRoman(int num) {
        auto transferToRoman = [&] (int value, char one, char five, char ten) -> std::string 
        {
            switch (value)
            {
                case 1:
                    return std::string({one});
                case 2:
                    return std::string({one,one});
                case 3:
                    return std::string({one,one,one});
                case 4:
                    return std::string({one,five});
                case 5:
                    return std::string({five});
                case 6:
                    return std::string({five,one});
                case 7:
                    return std::string({five,one,one});
                case 8:
                    return std::string({five,one,one,one});
                case 9:
                    return std::string({one,ten});
                default:
                    return "";
            };
        };
        std::string out;
        out += transferToRoman((num/1000)%10, 'M', 'q', 'q');
        out += transferToRoman((num/100)%10, 'C', 'D', 'M');
        out += transferToRoman((num/10)%10, 'X', 'L', 'C');
        out += transferToRoman(num%10, 'I', 'V', 'X');
        return out;

    }
};