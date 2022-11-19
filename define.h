class Counter
{
	private:
		int count;
	public:
		Counter(int start = 1);

};

struct lable
{
  static const char* num1;
	static const char* num2;
};

enum nvar
{
	num1,
	num2
};

void initObj(Name* obj, nvar num_id);
void outObj(Name* obj);
