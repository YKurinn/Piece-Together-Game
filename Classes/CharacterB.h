#ifndef _CHARACTERB_H
#define _CHARACTERB_H

#include "Character.h"


class CharacterB : public Character {
private:
	static CharacterB* chara;//������Ա
	
public:
	static CharacterB* create(const std::string& filename);//��������

	static CharacterB* getChara();//��ȡ����

	virtual void runSkill()override;

	virtual void endSkill()override;

	virtual void firstInitialize();

	virtual void saveData()override;

	virtual void loadData()override;

	virtual void groan();

};

#endif // !_CHARACTERB_H
