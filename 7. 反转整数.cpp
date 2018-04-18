class Solution {
public:
	int reverse(int x) {
		string str = to_string(x);
		string result;
		if (x < 0) std::reverse(str.begin() + 1, str.end());
		else std::reverse(str.begin(), str.end());
		long long int temp = stoll(str);
		if (temp>2147483647 || temp<-2147483648)
		{
			return 0;
		}
		return (int)temp;
	}
};