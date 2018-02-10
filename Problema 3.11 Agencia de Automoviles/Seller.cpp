class Seller
{
	private: int models[15];
	
	public: Seller(int models[])
	{
		for(int i=0; i<15; i++)
		{
			this->models[i] = models[i];
		}
	}
	
	public: addModels()
	{
		int sum=0;
		for(int i=0; i<15; i++)
		{
			sum += models[i];
		}
		return sum;
	}
	
	
	public: operator [] (int i)
	{
		return models[i];
	}
	
	
};
