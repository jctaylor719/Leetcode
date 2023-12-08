class Solution {
public:
  int myAtoi(string s) {
      
    const int len = s.size();

    if(len == 0) {
        return 0;
    }

    int index = 0;

    // Step 1: Ignore any leading whitespace
    while(index < len && s[index] == ' ') {
        index++;
    }

    // Step 2: Check if the number is positive or negative
    bool isNegative = false;

    if(index < len) {
        if(s[index] == '-') {
            isNegative = true;
            index++;
        }
        else if (s[index] == '+') {
            index++;
        }
    }

    int result = 0;

    // Step 3 and 4: Read characters and convert to int
    while(index < len && isDigit(s[index])) {

        /* s[index] - '0' is to convert the char digit into int digit eg: '5' - '0' --> 5
        or else it will store the ASCII value of 5 i.e. 53,
        so we do 53(ASCII of 5) - 48(ASCII of 0(zero)) to get 5 as int*/
        int digit = s[index] - '0';

        // Step 5: Avoid integer overflow
        if(result > (INT_MAX / 10) || (result == (INT_MAX / 10) && digit > 7)) {
            return isNegative ? INT_MIN : INT_MAX;
        }

        result = (result * 10) + digit;

        index++;
    }

    // Step 6: Return final result
    return isNegative ? -result : result;

  }
    
private:
  bool isDigit(char ch) {
      return ch >= '0' && ch <= '9';
  }
};
