int ModExpo(int base, int power, int mod)
{
	base %= mod;
	int result = 1;
	while(power > 0)
	{
		if(power & 1)result = (result * base) % mod;
		base = (base * base) % mod;
		power >>= 1;
	}
	return result;
}
