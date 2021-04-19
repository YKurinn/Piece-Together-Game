#ifndef _GLOBALINSTANCECLASS_H
#define _GLOBALINSTANCECLASS_H

#include "CharacterA.h"
#include "CharacterB.h"
#include "CharacterC.h"
#include "CharacterD.h"

class GlobalInstanceClass {
public:
	static Character* player;

	static Character* enemy;

	static bool isGameSaved;

	static void createAllGlobalInstance();//������Ϸ��Ҫ�������Զ��嵥������

	static void firstInitializeAll();//��Ϸ��������ʱ��ʼ�����е�������

	static CharacterA* getCharaA();

	static CharacterB* getCharaB();

	static CharacterC* getCharaC();

	static CharacterD* getCharaD();

	static bool saveAll();

	static bool loadAll();
};







#endif // !_GLOBALINSTANCECLASS_H
