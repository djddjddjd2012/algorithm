class Solution
{
public:
	size_t reverseBits(size_t n)
	{
		size_t i, bit = 1, num[32] = { 0 }, res = 0;
		for (i = 0; i < 32; i++, bit = bit << 1)
		{
			if (bit&n)
				num[31 - i] = 1;
		}

		for (i = 0, bit = 1; i < 32; ++i, bit = 1)
		{
			if (num[i] == 0)
				continue;
			else
				res += (bit << i);
		}
		return res;
	}
};

int main()
{
	return 0;
}