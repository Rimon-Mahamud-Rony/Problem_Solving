class Solution {
public:
    int reverse(int number) {
        int rev = 0;

        while (number != 0){

            int last_digit = number % 10;
            
            if (rev> INT_MAX/10 || rev <INT_MIN/10) return 0;

            //C++ এ 32-bit range INT_MAX =  2147483647, INT_MIN = -2147483648

            rev = rev*10 + last_digit;

            number = number/10;  
        }

        return rev;
    }

    int main()
    {
        int number = 0;
        cout<<reverse(number)<<endl;
        return 0;
    }
};
