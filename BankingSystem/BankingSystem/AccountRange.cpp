#include "MiniBankingCommonDecl.h"
#include "AccountRange.h"
#include "Account.h"
#include "Excep.h"

template <typename T>
AccountRange<T>::AccountRange(int len) {
	acc = new T[len];
	arrlen = len;
}

template <typename T>
T& AccountRange<T>::operator[](int idx) {
	if (idx < 0 || idx >= arrlen) {
		cout << "배열의 범위를 벗어났습니다." << endl;
		exit(1);
	}

	return acc[idx];
}

template <typename T>
T AccountRange<T>::operator[](int idx) const {
	if (idx < 0 || idx >= arrlen) {
		cout << "배열의 범위를 벗어났습니다." << endl;
		exit(1);
	}

	return acc[idx];
}

template <typename T>
int AccountRange<T>::GetArrLen() const {
	return arrlen;
}

template <typename T>
AccountRange<T>::~AccountRange() {
	delete[]acc;
}
