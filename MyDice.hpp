
class MyDice
{
public:
	MyDice(int seed);
	~MyDice(void);

    int dice();
    bool isEven();
    bool isOdd();

private:
    int m_seed;
    int m_value;
};
