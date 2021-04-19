#ifndef _CHARACTERB_H
#define _CHARACTERB_H

#include "Character.h"


class CharacterB : public Character {
private:
	static CharacterB* chara;//������Ա
	static CharacterB* create(const std::string& filename);//��������˽�л�
public:
	static CharacterB* getChara();//��ȡ����

	virtual void runSkill()override;

	virtual void endSkill()override;

	virtual void firstInitialize();

	virtual void saveData()override;

	virtual void loadData()override;
};

#endif // !_CHARACTERB_H
