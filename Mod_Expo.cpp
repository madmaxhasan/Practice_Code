ll ModExpo(ll base, ll power, ll mod)
{
	base %= mod;
	ll result = 1;
	while(power > 0)
	{
		if(power & 1)result = (result * base) % mod;
		base = (base * base) % mod;
		power >>= 1;
	}
	return result;
}
