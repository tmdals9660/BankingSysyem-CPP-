#ifndef _ACCOUNTRANGGE_H_
#define	_ACCOUNTRANGGE_H_

#include "Account.h"

#define MaxNum	100


template <typename T>
class AccountRange {
private:
	T* acc;	
	int arrlen;				
	

	AccountRange(const AccountRange &arr) {}
	AccountRange& operator=(const AccountRange &arr){}

public:

	AccountRange(int len = MaxNum);
	

	T& operator[](int idx);

	
	T operator[](int idx) const;


	int GetArrLen() const;


	~AccountRange();

};


#endif // !1

