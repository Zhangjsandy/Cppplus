class BankAccount
{
private:
	std::string m_name;
	std::string m_acctnum;
	double balance;
public:
	BankAccount(const std::string& client, const std::string& num, double bal = 0.0);
	void show(void) const;
	void deposit(double cash);
	void withdraw(double cash);
	};

