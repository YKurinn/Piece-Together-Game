#ifndef _GLOBALINSTANCECLASS_H
#define _GLOBALINSTANCECLASS_H

#include "CharacterA.h"


class GlobalInstanceClass {
public:
	Character* player;
	Character* enemy;

	void createAll();//������Ϸ��Ҫ�������Զ��嵥������

	static CharacterA* getCharaA();
};







#endif // !_GLOBALINSTANCECLASS_H
