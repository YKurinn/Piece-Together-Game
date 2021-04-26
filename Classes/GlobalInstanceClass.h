#ifndef _GLOBALINSTANCECLASS_H
#define _GLOBALINSTANCECLASS_H

#include "CharacterA.h"
#include "CharacterB.h"
#include "CharacterC.h"
#include "CharacterD.h"
#include "SimpleAudioEngine.h"

using namespace CocosDenshion;

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

	static void playMusicEffect(const char* file);

	static void playMusic(const char* file);

	//��Ч�Ƿ��
	static bool musicEffect;

	static bool music;
};







#endif // !_GLOBALINSTANCECLASS_H
